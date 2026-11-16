/* f_0x1007efb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007efb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(COW_IMG(0x1047d490u)) >= 2) goto L_1007efc0;
    return -arg3;
L_1007efc0: ;
    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->eax = rd32(COW_IMG(0x103551e0u));
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t1, 1, t1);
    t4 = g->edx;
    if ((int32_t)(t3 - 1u) >= 0)
    {
        eax = t3 - 1u;
        edx = t4;
        goto L_1007efdb;
    }
    edx = t4;
    g->edx = edx;
    return -arg3;
L_1007efdb: ;
    if ((int32_t)rd32(COW_IMG(0x1047d490u)) >= 3)
    {
        ecx = rd32(COW_IMG(0x1047d490u));
        loc_4 = eax;
        goto L_1007effc;
    }
    loc_4 = eax;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x101ddb30u), rd32(COW_IMG(0x10663484u)), 2, COW_IMG(0x103d3c84u), loc_4);
    t5 = g->edx;
    g->edx = t5;
    return arg3;
L_1007effc: ;
    t6 = rd32(rd32(COW_IMG(0x103551e4u)) + 8u);
    g->edx = rd32(COW_IMG(0x103551e4u));
    t7 = rd32(COW_IMG(0x103551e4u));
    g->esp = sp0 - 4u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x10076a70u), ecx, 1, t6);
    t9 = g->edx;
    g->edx = t9;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x101ddb30u), rd32(COW_IMG(0x10663484u)), 2, t8, loc_4);
    t10 = g->edx;
    g->edx = t10;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007efb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007efb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
