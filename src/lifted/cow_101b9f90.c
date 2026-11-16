/* f_0x101b9f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101b9f90(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_101b9fb2;
    }
    eax = rd32(self + 4u);
    edx = 0u;
L_101b9f9e: ;
    if (rd32(eax + 0x108u) == arg1) goto L_101b9fb8;
    if (rd32(eax + 0x120u) != 0u)
    {
        edx = eax;
        eax = rd32(eax + 0x120u);
        goto L_101b9f9e;
    }
    eax = rd32(eax + 0x120u);
L_101b9fb2: ;
    return eax & 0xffffff00u;
L_101b9fb8: ;
    if (edx == 0u) goto L_101b9fd6;
    t1 = rd32(eax + 0x120u);
    wr32(edx + 0x120u, t1);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(rd32(eax)), eax, 1, 1u);
    return (t2 & 0xffffff00u) | 1u;
L_101b9fd6: ;
    t3 = rd32(eax + 0x120u);
    wr32(self + 4u, t3);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, rd32(rd32(eax)), eax, 1, 1u);
    return (t4 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b9f90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b9f90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
