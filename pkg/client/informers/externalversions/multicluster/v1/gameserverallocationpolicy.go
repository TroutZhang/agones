// Copyright 2023 Google LLC All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// This code was autogenerated. Do not edit directly.

// Code generated by informer-gen. DO NOT EDIT.

package v1

import (
	"context"
	time "time"

	multiclusterv1 "agones.dev/agones/pkg/apis/multicluster/v1"
	versioned "agones.dev/agones/pkg/client/clientset/versioned"
	internalinterfaces "agones.dev/agones/pkg/client/informers/externalversions/internalinterfaces"
	v1 "agones.dev/agones/pkg/client/listers/multicluster/v1"
	metav1 "k8s.io/apimachinery/pkg/apis/meta/v1"
	runtime "k8s.io/apimachinery/pkg/runtime"
	watch "k8s.io/apimachinery/pkg/watch"
	cache "k8s.io/client-go/tools/cache"
)

// GameServerAllocationPolicyInformer provides access to a shared informer and lister for
// GameServerAllocationPolicies.
type GameServerAllocationPolicyInformer interface {
	Informer() cache.SharedIndexInformer
	Lister() v1.GameServerAllocationPolicyLister
}

type gameServerAllocationPolicyInformer struct {
	factory          internalinterfaces.SharedInformerFactory
	tweakListOptions internalinterfaces.TweakListOptionsFunc
	namespace        string
}

// NewGameServerAllocationPolicyInformer constructs a new informer for GameServerAllocationPolicy type.
// Always prefer using an informer factory to get a shared informer instead of getting an independent
// one. This reduces memory footprint and number of connections to the server.
func NewGameServerAllocationPolicyInformer(client versioned.Interface, namespace string, resyncPeriod time.Duration, indexers cache.Indexers) cache.SharedIndexInformer {
	return NewFilteredGameServerAllocationPolicyInformer(client, namespace, resyncPeriod, indexers, nil)
}

// NewFilteredGameServerAllocationPolicyInformer constructs a new informer for GameServerAllocationPolicy type.
// Always prefer using an informer factory to get a shared informer instead of getting an independent
// one. This reduces memory footprint and number of connections to the server.
func NewFilteredGameServerAllocationPolicyInformer(client versioned.Interface, namespace string, resyncPeriod time.Duration, indexers cache.Indexers, tweakListOptions internalinterfaces.TweakListOptionsFunc) cache.SharedIndexInformer {
	return cache.NewSharedIndexInformer(
		&cache.ListWatch{
			ListFunc: func(options metav1.ListOptions) (runtime.Object, error) {
				if tweakListOptions != nil {
					tweakListOptions(&options)
				}
				return client.MulticlusterV1().GameServerAllocationPolicies(namespace).List(context.TODO(), options)
			},
			WatchFunc: func(options metav1.ListOptions) (watch.Interface, error) {
				if tweakListOptions != nil {
					tweakListOptions(&options)
				}
				return client.MulticlusterV1().GameServerAllocationPolicies(namespace).Watch(context.TODO(), options)
			},
		},
		&multiclusterv1.GameServerAllocationPolicy{},
		resyncPeriod,
		indexers,
	)
}

func (f *gameServerAllocationPolicyInformer) defaultInformer(client versioned.Interface, resyncPeriod time.Duration) cache.SharedIndexInformer {
	return NewFilteredGameServerAllocationPolicyInformer(client, f.namespace, resyncPeriod, cache.Indexers{cache.NamespaceIndex: cache.MetaNamespaceIndexFunc}, f.tweakListOptions)
}

func (f *gameServerAllocationPolicyInformer) Informer() cache.SharedIndexInformer {
	return f.factory.InformerFor(&multiclusterv1.GameServerAllocationPolicy{}, f.defaultInformer)
}

func (f *gameServerAllocationPolicyInformer) Lister() v1.GameServerAllocationPolicyLister {
	return v1.NewGameServerAllocationPolicyLister(f.Informer().GetIndexer())
}
