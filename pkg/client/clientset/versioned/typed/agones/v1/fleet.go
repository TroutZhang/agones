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

// Code generated by client-gen. DO NOT EDIT.

package v1

import (
	"context"
	json "encoding/json"
	"fmt"
	"time"

	v1 "agones.dev/agones/pkg/apis/agones/v1"
	agonesv1 "agones.dev/agones/pkg/client/applyconfiguration/agones/v1"
	scheme "agones.dev/agones/pkg/client/clientset/versioned/scheme"
	autoscalingv1 "k8s.io/api/autoscaling/v1"
	metav1 "k8s.io/apimachinery/pkg/apis/meta/v1"
	types "k8s.io/apimachinery/pkg/types"
	watch "k8s.io/apimachinery/pkg/watch"
	rest "k8s.io/client-go/rest"
)

// FleetsGetter has a method to return a FleetInterface.
// A group's client should implement this interface.
type FleetsGetter interface {
	Fleets(namespace string) FleetInterface
}

// FleetInterface has methods to work with Fleet resources.
type FleetInterface interface {
	Create(ctx context.Context, fleet *v1.Fleet, opts metav1.CreateOptions) (*v1.Fleet, error)
	Update(ctx context.Context, fleet *v1.Fleet, opts metav1.UpdateOptions) (*v1.Fleet, error)
	UpdateStatus(ctx context.Context, fleet *v1.Fleet, opts metav1.UpdateOptions) (*v1.Fleet, error)
	Delete(ctx context.Context, name string, opts metav1.DeleteOptions) error
	DeleteCollection(ctx context.Context, opts metav1.DeleteOptions, listOpts metav1.ListOptions) error
	Get(ctx context.Context, name string, opts metav1.GetOptions) (*v1.Fleet, error)
	List(ctx context.Context, opts metav1.ListOptions) (*v1.FleetList, error)
	Watch(ctx context.Context, opts metav1.ListOptions) (watch.Interface, error)
	Patch(ctx context.Context, name string, pt types.PatchType, data []byte, opts metav1.PatchOptions, subresources ...string) (result *v1.Fleet, err error)
	Apply(ctx context.Context, fleet *agonesv1.FleetApplyConfiguration, opts metav1.ApplyOptions) (result *v1.Fleet, err error)
	ApplyStatus(ctx context.Context, fleet *agonesv1.FleetApplyConfiguration, opts metav1.ApplyOptions) (result *v1.Fleet, err error)
	GetScale(ctx context.Context, fleetName string, options metav1.GetOptions) (*autoscalingv1.Scale, error)
	UpdateScale(ctx context.Context, fleetName string, scale *autoscalingv1.Scale, opts metav1.UpdateOptions) (*autoscalingv1.Scale, error)

	FleetExpansion
}

// fleets implements FleetInterface
type fleets struct {
	client rest.Interface
	ns     string
}

// newFleets returns a Fleets
func newFleets(c *AgonesV1Client, namespace string) *fleets {
	return &fleets{
		client: c.RESTClient(),
		ns:     namespace,
	}
}

// Get takes name of the fleet, and returns the corresponding fleet object, and an error if there is any.
func (c *fleets) Get(ctx context.Context, name string, options metav1.GetOptions) (result *v1.Fleet, err error) {
	result = &v1.Fleet{}
	err = c.client.Get().
		Namespace(c.ns).
		Resource("fleets").
		Name(name).
		VersionedParams(&options, scheme.ParameterCodec).
		Do(ctx).
		Into(result)
	return
}

// List takes label and field selectors, and returns the list of Fleets that match those selectors.
func (c *fleets) List(ctx context.Context, opts metav1.ListOptions) (result *v1.FleetList, err error) {
	var timeout time.Duration
	if opts.TimeoutSeconds != nil {
		timeout = time.Duration(*opts.TimeoutSeconds) * time.Second
	}
	result = &v1.FleetList{}
	err = c.client.Get().
		Namespace(c.ns).
		Resource("fleets").
		VersionedParams(&opts, scheme.ParameterCodec).
		Timeout(timeout).
		Do(ctx).
		Into(result)
	return
}

// Watch returns a watch.Interface that watches the requested fleets.
func (c *fleets) Watch(ctx context.Context, opts metav1.ListOptions) (watch.Interface, error) {
	var timeout time.Duration
	if opts.TimeoutSeconds != nil {
		timeout = time.Duration(*opts.TimeoutSeconds) * time.Second
	}
	opts.Watch = true
	return c.client.Get().
		Namespace(c.ns).
		Resource("fleets").
		VersionedParams(&opts, scheme.ParameterCodec).
		Timeout(timeout).
		Watch(ctx)
}

// Create takes the representation of a fleet and creates it.  Returns the server's representation of the fleet, and an error, if there is any.
func (c *fleets) Create(ctx context.Context, fleet *v1.Fleet, opts metav1.CreateOptions) (result *v1.Fleet, err error) {
	result = &v1.Fleet{}
	err = c.client.Post().
		Namespace(c.ns).
		Resource("fleets").
		VersionedParams(&opts, scheme.ParameterCodec).
		Body(fleet).
		Do(ctx).
		Into(result)
	return
}

// Update takes the representation of a fleet and updates it. Returns the server's representation of the fleet, and an error, if there is any.
func (c *fleets) Update(ctx context.Context, fleet *v1.Fleet, opts metav1.UpdateOptions) (result *v1.Fleet, err error) {
	result = &v1.Fleet{}
	err = c.client.Put().
		Namespace(c.ns).
		Resource("fleets").
		Name(fleet.Name).
		VersionedParams(&opts, scheme.ParameterCodec).
		Body(fleet).
		Do(ctx).
		Into(result)
	return
}

// UpdateStatus was generated because the type contains a Status member.
// Add a +genclient:noStatus comment above the type to avoid generating UpdateStatus().
func (c *fleets) UpdateStatus(ctx context.Context, fleet *v1.Fleet, opts metav1.UpdateOptions) (result *v1.Fleet, err error) {
	result = &v1.Fleet{}
	err = c.client.Put().
		Namespace(c.ns).
		Resource("fleets").
		Name(fleet.Name).
		SubResource("status").
		VersionedParams(&opts, scheme.ParameterCodec).
		Body(fleet).
		Do(ctx).
		Into(result)
	return
}

// Delete takes name of the fleet and deletes it. Returns an error if one occurs.
func (c *fleets) Delete(ctx context.Context, name string, opts metav1.DeleteOptions) error {
	return c.client.Delete().
		Namespace(c.ns).
		Resource("fleets").
		Name(name).
		Body(&opts).
		Do(ctx).
		Error()
}

// DeleteCollection deletes a collection of objects.
func (c *fleets) DeleteCollection(ctx context.Context, opts metav1.DeleteOptions, listOpts metav1.ListOptions) error {
	var timeout time.Duration
	if listOpts.TimeoutSeconds != nil {
		timeout = time.Duration(*listOpts.TimeoutSeconds) * time.Second
	}
	return c.client.Delete().
		Namespace(c.ns).
		Resource("fleets").
		VersionedParams(&listOpts, scheme.ParameterCodec).
		Timeout(timeout).
		Body(&opts).
		Do(ctx).
		Error()
}

// Patch applies the patch and returns the patched fleet.
func (c *fleets) Patch(ctx context.Context, name string, pt types.PatchType, data []byte, opts metav1.PatchOptions, subresources ...string) (result *v1.Fleet, err error) {
	result = &v1.Fleet{}
	err = c.client.Patch(pt).
		Namespace(c.ns).
		Resource("fleets").
		Name(name).
		SubResource(subresources...).
		VersionedParams(&opts, scheme.ParameterCodec).
		Body(data).
		Do(ctx).
		Into(result)
	return
}

// Apply takes the given apply declarative configuration, applies it and returns the applied fleet.
func (c *fleets) Apply(ctx context.Context, fleet *agonesv1.FleetApplyConfiguration, opts metav1.ApplyOptions) (result *v1.Fleet, err error) {
	if fleet == nil {
		return nil, fmt.Errorf("fleet provided to Apply must not be nil")
	}
	patchOpts := opts.ToPatchOptions()
	data, err := json.Marshal(fleet)
	if err != nil {
		return nil, err
	}
	name := fleet.Name
	if name == nil {
		return nil, fmt.Errorf("fleet.Name must be provided to Apply")
	}
	result = &v1.Fleet{}
	err = c.client.Patch(types.ApplyPatchType).
		Namespace(c.ns).
		Resource("fleets").
		Name(*name).
		VersionedParams(&patchOpts, scheme.ParameterCodec).
		Body(data).
		Do(ctx).
		Into(result)
	return
}

// ApplyStatus was generated because the type contains a Status member.
// Add a +genclient:noStatus comment above the type to avoid generating ApplyStatus().
func (c *fleets) ApplyStatus(ctx context.Context, fleet *agonesv1.FleetApplyConfiguration, opts metav1.ApplyOptions) (result *v1.Fleet, err error) {
	if fleet == nil {
		return nil, fmt.Errorf("fleet provided to Apply must not be nil")
	}
	patchOpts := opts.ToPatchOptions()
	data, err := json.Marshal(fleet)
	if err != nil {
		return nil, err
	}

	name := fleet.Name
	if name == nil {
		return nil, fmt.Errorf("fleet.Name must be provided to Apply")
	}

	result = &v1.Fleet{}
	err = c.client.Patch(types.ApplyPatchType).
		Namespace(c.ns).
		Resource("fleets").
		Name(*name).
		SubResource("status").
		VersionedParams(&patchOpts, scheme.ParameterCodec).
		Body(data).
		Do(ctx).
		Into(result)
	return
}

// GetScale takes name of the fleet, and returns the corresponding autoscalingv1.Scale object, and an error if there is any.
func (c *fleets) GetScale(ctx context.Context, fleetName string, options metav1.GetOptions) (result *autoscalingv1.Scale, err error) {
	result = &autoscalingv1.Scale{}
	err = c.client.Get().
		Namespace(c.ns).
		Resource("fleets").
		Name(fleetName).
		SubResource("scale").
		VersionedParams(&options, scheme.ParameterCodec).
		Do(ctx).
		Into(result)
	return
}

// UpdateScale takes the top resource name and the representation of a scale and updates it. Returns the server's representation of the scale, and an error, if there is any.
func (c *fleets) UpdateScale(ctx context.Context, fleetName string, scale *autoscalingv1.Scale, opts metav1.UpdateOptions) (result *autoscalingv1.Scale, err error) {
	result = &autoscalingv1.Scale{}
	err = c.client.Put().
		Namespace(c.ns).
		Resource("fleets").
		Name(fleetName).
		SubResource("scale").
		VersionedParams(&opts, scheme.ParameterCodec).
		Body(scale).
		Do(ctx).
		Into(result)
	return
}
