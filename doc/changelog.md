# Change Log

- 0.14.4
  - EntityMngr add single `CmptType` API
  - Add some template API for `SystemTraits` and `SystemMngr` 
  - `static_assert(std::is_copy_constructible_v<Cmpt>)` to `std::is_copy_constructible_v<Cmpt> || std::is_constructible_v<Cmpt, Cmpt&>` 
- 0.14.3
  - `CmptsView`, `SingletonsView` use `Span` 
  - API with `const CmptType* types, size_t num` use `Span<CmptType> types` as instead
  - move `include/UECS/detail/_deps/taskflow` to `include/_deps/taskflow` 
- 0.14.2
  - add `RandomAccessor` for random access other entity's component
    - `SystemFunc` add the member
    - `Schedule::Register*` add the parameter
    - feature `None Parallel` is updated to support `RandomAccessor` 
    - `World::GenUpdateFrameGraph` is updated to support `RandomAccessor` 
  - `CmptAccessType`'s default `AccessMode` change from `LATEST` to `WRITE` 
  - `World` command buffer layer's type change from `size_t` to `int` 
- 0.14.1: `CmptAccessMode` remove singleton
- 0.14.0: System Lifecycle

