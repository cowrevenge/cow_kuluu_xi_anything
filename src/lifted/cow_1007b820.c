/* f_0x1007b820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007b820(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x7fu, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1007b839;
    }
    edx = t3;
    g->edx = edx;
    return arg3;
L_1007b839: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101cbdf0u), eax, g->ecx, g->edx, 1, 1, 1u);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        edx = t5;
        goto L_1007b85b;
    }
    edx = t5;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0x10u);
    t6 = g->edx;
    g->edx = t6;
    return arg3;
L_1007b85b: ;
    t7 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = t7;
    t8 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x10223240u), t8, g->ecx, g->edx, 1, 4, t7, 0u, 0u, 0u);
    t10 = g->ecx;
    t11 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->ecx = t10;
    g->edx = rd32(COW_IMG(0x103551e0u));
    t12 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x18u;
    t13 = cow_call_regs(g, COW_IMG(0x1007a1c0u), t11, g->ecx, g->edx, 1, 4, t11, 0u, 1u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        edx = t15;
        goto L_1007b8ef;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    esi = t9;
    edi = t13;
    if ((int32_t)esi < 0) goto L_1007b8ef;
    if ((int32_t)esi >= 512) goto L_1007b8ef;
    if (rd8(COW_IMG(0x1047d498u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
        goto L_1007b8b4;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10223760u), 1, esi);
    t16 = g->edx;
    g->edx = t16;
    return arg3;
L_1007b8b4: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t17 = cow_cdecl(g, COW_IMG(0x10223760u), 1, 0xffffffffu);
    if (esi == 0u)
    {
        eax = t17;
        esi = 0u;
    }
    else
    {
        eax = t17;
        if ((int32_t)esi >= 256)
        {
            esi = esi + 0x2000u;
        }
    }
    t18 = rd32(edi + 4u);
    g->edx = rd32(edi);
    t19 = rd32(edi);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100780a0u), 5, t19, t18, 7u, esi, 0u);
    t20 = g->edx;
    g->edx = t20;
    return arg3;
L_1007b8ef: ;
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007b820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007b820(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
