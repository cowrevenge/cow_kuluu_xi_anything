/* f_0x100e2ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100e2ac0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104df770u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e2b21;
    }
    eax = rd32(COW_IMG(0x104df770u));
    if (rd32(eax + 0x1369cu) == 0u) goto L_100e2b21;
    esi = rd32(eax + 0x1369cu);
    g->ecx = arg2;
    g->edx = arg4;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100e1c30u), 12, esi, 0u, 0u, 0u, arg1, 0u, 0u, arg2, arg3, arg4, arg5, arg6);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        loc_10 = esi;
        goto L_100e2b19;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    loc_10 = esi;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100e1c00u), 2, loc_10, arg1);
    return (t4 & 0xffffff00u) | 1u;
L_100e2b19: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x100e1c00u), 2, loc_10, arg1);
    eax = t5;
L_100e2b21: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e2ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e2ac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
