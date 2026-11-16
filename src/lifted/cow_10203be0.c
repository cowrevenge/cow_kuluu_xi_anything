/* f_0x10203be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10203be0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 320u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_10203c48;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, eax + 0x9534u);
    wr32(sp0 - 0x12cu, COW_IMG(0x10203c60u));
    wr32(sp0 - 0x130u, 0x2bcu);
    wr32(sp0 - 0x134u, eax + 0x9534u);
    wr32(sp0 - 0x138u, COW_IMG(0x10385420u));
    wr32(sp0 - 0x13cu, 1u);
    g->eax = eax + 0x9534u;
    g->edx = in_edx;
    g->esp = sp0 - 0x120u;
    t1 = cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0x120u, 7, 1u, COW_IMG(0x10385420u), eax + 0x9534u, 0x2bcu, COW_IMG(0x10203c60u), eax + 0x9534u, 0u);
    t2 = g->edx;
    if ((uint8_t)arg1 == 0u)
    {
        edx = t2;
        goto L_10203c3a;
    }
    edx = t2;
    wr32(sp0 - 0x124u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t3 = cow_thiscall(g, COW_IMG(0x101b9bc0u), sp0 - 0x120u, 1, 0u);
    t4 = g->edx;
    t5 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x120u, 0);
    return t5;
L_10203c3a: ;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t6 = cow_thiscall(g, COW_IMG(0x101b9a10u), sp0 - 0x120u, 0);
    t7 = g->edx;
    t8 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x120u, 0);
    eax = t8;
L_10203c48: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10203be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10203be0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
