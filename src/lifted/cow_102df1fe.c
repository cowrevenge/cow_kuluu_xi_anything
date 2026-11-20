/* f_0x102df1fe - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   copies/merges two vector-like objects using temporary buffers, virtual element callbacks, and deletes the temporaries.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102df1fe(Guest* g, uint32_t self)
{
    uint32_t a, b;
    uint32_t rows_max, cols_min, depth_min;
    uint32_t size1, size2;
    uint32_t ptr1, ptr2;
    uint32_t counter, i, j, n;
    uint32_t vtable, target;
    uint32_t saved_ebx = g->ebx;
    uint32_t saved_esi = g->esi;
    uint32_t saved_edi = g->edi;
    uint32_t saved_ebp = g->ebp;

    if (rd8(self + 8u) != 1u)
    {
        g->eax = 0x80004005u;
        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        return g->eax;
    }

    a = rd32(self + 4u);
    b = rd32(self);

    g->edx = rd32(a + 0x1058u);
    rows_max = g->edx;
    if (rows_max <= rd32(b + 0x1058u))
        rows_max = rd32(b + 0x1058u);

    g->edx = rd32(a + 0x105cu);
    cols_min = g->edx;
    if (rd32(b + 0x105cu) < cols_min)
        cols_min = rd32(b + 0x105cu);

    g->eax = rd32(a + 0x1060u);
    depth_min = g->eax;
    if (rd32(b + 0x1060u) < depth_min)
        depth_min = rd32(b + 0x1060u);

    size1 = rows_max << 4;
    ptr1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1u, size1);
    g->eax = ptr1;

    if (ptr1 != 0u)
    {
        cow_stdcall(g, COW_IMG(0x102d31edu), 4u,
                    ptr1,
                    0x10u,
                    rows_max,
                    COW_IMG(0x102d2a17u));
        ptr2 = ptr1;
    }
    else
    {
        ptr2 = 0u;
    }

    if (ptr2 == 0u)
    {
        g->eax = 0x80004005u;
        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        return g->eax;
    }

    rows_max = rd32(a + 0x1058u);
    size2 = rows_max << 4;
    ptr2 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1u, size2);
    g->eax = ptr2;

    if (ptr2 != 0u)
    {
        cow_stdcall(g, COW_IMG(0x102d31edu), 4u,
                    ptr2,
                    0x10u,
                    rows_max,
                    COW_IMG(0x102d2a17u));
    }
    else
    {
        ptr2 = 0u;
    }

    if (ptr2 == 0u)
    {
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, ptr1);
        g->eax = 0x80004005u;
        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        return g->eax;
    }

    g->edi = ptr1;
    g->eax = 0u;
    n = size1;
    g->edx = n;
    g->ecx = n >> 2;
    while (g->ecx != 0u)
    {
        wr32(g->edi, 0u);
        g->edi += 4u;
        --g->ecx;
    }
    g->ecx = g->edx & 3u;
    while (g->ecx != 0u)
    {
        wr8(g->edi, 0u);
        ++g->edi;
        --g->ecx;
    }

    g->edi = ptr2;
    g->eax = 0u;
    n = rd32(a + 0x1058u) << 4;
    g->edx = n;
    g->ecx = n >> 2;
    while (g->ecx != 0u)
    {
        wr32(g->edi, 0u);
        g->edi += 4u;
        --g->ecx;
    }
    g->ecx = g->edx & 3u;
    while (g->ecx != 0u)
    {
        wr8(g->edi, 0u);
        ++g->edi;
        --g->ecx;
    }

    counter = 0u;
    if (depth_min != 0u)
    {
        do
        {
            j = 0u;
            if (cols_min != 0u)
            {
                do
                {
                    vtable = rd32(b);
                    target = rd32(vtable + 4u);
                    g->eax = vtable;
                    cow_thiscall(g, target, b, 3u, j, counter, ptr1);

                    vtable = rd32(a);
                    target = rd32(vtable + 8u);
                    g->eax = vtable;
                    cow_thiscall(g, target, a, 3u, j, counter, ptr1);

                    ++j;
                } while (j < cols_min);
            }

            if (cols_min < rd32(a + 0x105cu))
            {
                do
                {
                    vtable = rd32(a);
                    target = rd32(vtable + 8u);
                    g->eax = vtable;
                    cow_thiscall(g, target, a, 3u, j, counter, ptr2);

                    ++j;
                } while (j < rd32(a + 0x105cu));
            }

            ++counter;
        } while (counter < depth_min);
    }

    if (depth_min < rd32(a + 0x1060u))
    {
        do
        {
            j = 0u;
            if (rd32(a + 0x105cu) != 0u)
            {
                do
                {
                    vtable = rd32(a);
                    target = rd32(vtable + 8u);
                    g->eax = vtable;
                    cow_thiscall(g, target, a, 3u, j, depth_min, ptr2);

                    ++j;
                } while (j < rd32(a + 0x105cu));
            }

            ++depth_min;
        } while (depth_min < rd32(a + 0x1060u));
    }

    cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, ptr1);
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, ptr2);

    g->eax = 0u;
    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102df1fe(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102df1fe(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
