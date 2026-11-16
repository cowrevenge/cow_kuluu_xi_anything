/* f_0x1007e190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007e190(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        edi = t1;
        goto L_1007e1a9;
    }
    edx = t2;
    g->edx = edx;
    return arg3;
L_1007e1a9: ;
    t3 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = t3;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x1007a1c0u), t4, g->ecx, g->edx, 1, 4, t3, 1u, 0u, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x1007e220u), 3, t5, t3, 1u);
    t9 = g->edx;
    if (t8 == 0u)
    {
        edx = t9;
        goto L_1007e214;
    }
    eax = t8;
    edx = t9;
    esi = t8;
    if (esi == edi) goto L_1007e214;
    if (rd32(esi + 0x70u) == 0u) goto L_1007e214;
    ecx = rd32(esi + 0x70u);
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x10098210u), eax, ecx, edx, 0, 1, 1u);
    t11 = g->edx;
    if ((uint8_t)t10 != 1u)
    {
        edx = t11;
        goto L_1007e1fd;
    }
    eax = t10;
    edx = t11;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x10487f74u), 1, esi);
    t13 = g->edx;
    g->edx = t13;
    cow_call_regs(g, COW_IMG(0x100a6070u), t12, g->ecx, g->edx, 0, 1, 1u);
    t14 = g->edx;
    g->edx = t14;
    return arg3;
L_1007e1fd: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xa5u);
    t15 = g->edx;
    g->edx = t15;
    return arg3;
L_1007e214: ;
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007e190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007e190(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
