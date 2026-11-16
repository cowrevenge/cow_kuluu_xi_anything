/* f_0x1007bad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007bad0(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x7fu, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        goto L_1007bae9;
    }
    edx = t2;
    g->edx = edx;
    return arg3;
L_1007bae9: ;
    t3 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = t3;
    t4 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10223240u), t4, g->ecx, g->edx, 1, 4, t3, 1u, COW_IMG(0x10483118u), 0x10u);
    t6 = g->ecx;
    t7 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->ecx = t6;
    g->edx = rd32(COW_IMG(0x103551e0u));
    t8 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x18u;
    t9 = cow_call_regs(g, COW_IMG(0x1007a1c0u), t7, g->ecx, g->edx, 1, 4, t7, 0u, 0u, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        edx = t11;
        goto L_1007bb7c;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    esi = t5;
    edi = t9;
    if ((int32_t)esi < 1792) goto L_1007bb7c;
    if ((int32_t)esi >= 2816) goto L_1007bb7c;
    if (rd8(COW_IMG(0x1047d498u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
        goto L_1007bb49;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102233e0u), eax, g->ecx, g->edx, 1, 1, esi);
    t12 = g->edx;
    g->edx = t12;
    return arg3;
L_1007bb49: ;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102233e0u), eax, g->ecx, g->edx, 1, 1, 0xffffffffu);
    if (esi == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = esi - 0x600u;
    }
    t13 = rd32(edi + 4u);
    g->edx = rd32(edi);
    t14 = rd32(edi);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100780a0u), 5, t14, t13, 0x19u, eax, 0u);
    t15 = g->edx;
    g->edx = t15;
    return arg3;
L_1007bb7c: ;
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007bad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007bad0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
