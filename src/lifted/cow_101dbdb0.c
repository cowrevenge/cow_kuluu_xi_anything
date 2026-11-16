/* f_0x101dbdb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101dbdb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + 4u) == 0u) goto L_101dbdd3;
    eax = (in_eax & 0xffffff00u) | rd8(self + 4u);
    if (rd8(self + 6u) != rd8(arg1 + 2u)) goto L_101dbdd3;
    return 0x80804020u;
L_101dbdd3: ;
    if (rd32(self + 0xcu) > 0x10u)
    {
        edx = in_edx;
        goto L_101dbe08;
    }
    eax = rd32(self + 0xcu);
    t1 = rd32(COW_IMG(0x101dbeacu) + rd8(COW_IMG(0x101dbeb4u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x101dbdeau: goto L_101dbdea;
    case 0x101dbe08u: edx = in_edx; goto L_101dbe08;
    default: rt_fatal(g, COW_IMG(0x101dbde3u), "switch");
    }
    return 0;
L_101dbdea: ;
    t2 = (in_edx & 0xffffff00u) | rd8(arg1 + 2u);
    g->esp = sp0 - 8u;
    t3 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), t2, 2, t2, eax);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        edx = t4;
        goto L_101dbe08;
    }
    edx = t4;
    g->edx = edx;
    return 0x80509050u;
L_101dbe08: ;
    if (rd32(self + 0xcu) != 2u) goto L_101dbe52;
    eax = rd32(self + 0xcu) - 2u;
    t5 = (eax & 0xffffff00u) | rd8(arg1 + 2u);
    g->edx = edx;
    t6 = rd32(COW_IMG(0x105781b8u));
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x101334c0u), t5, t6, g->edx, 0, 3, t5, 0xffffffffu, 1u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_101dbe31;
    }
    edx = t9;
    g->edx = edx;
    return 0x80404040u;
L_101dbe31: ;
    t10 = (ecx & 0xffffff00u) | rd8(arg1 + 2u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x101334c0u), eax, rd32(COW_IMG(0x105781b8u)), g->edx, 0, 3, t10, 0xffffffffu, 9u);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        edx = t12;
        goto L_101dbe52;
    }
    edx = t12;
    g->edx = edx;
    return 0x80404040u;
L_101dbe52: ;
    if (rd32(self + 0xcu) == 1u) goto L_101dbe5d;
    esi = rd32(self + 0xcu) - 1u;
    if (esi != 8u) goto L_101dbea1;
L_101dbe5d: ;
    if (rd16(rd32(arg2 + 0x14b4u)) == 0xau)
    {
        ecx = rd32(arg2 + 0x14b4u);
        goto L_101dbe7b;
    }
    eax = rd16(rd32(arg2 + 0x14b4u)) - 0xau;
    ecx = rd32(arg2 + 0x14b4u);
    if (eax == 2u) goto L_101dbe7b;
    eax = eax - 2u;
    if (eax != 2u)
    {
        edx = arg2;
        goto L_101dbea1;
    }
L_101dbe7b: ;
    if ((rd8(arg1 + 0x11u) & 0x40u) == 0u)
    {
        edx = arg2;
        goto L_101dbea1;
    }
    g->edx = arg2;
    g->esp = sp0 - 8u;
    t13 = cow_stdcall(g, COW_IMG(0x100f1080u), 0);
    t14 = g->edx;
    g->edx = rd8(arg1 + 0x11u) & 3u;
    return (-(t13 != (rd8(arg1 + 0x11u) & 3u)) & 0x1fdfe0u) - 0x7fbfbfc0u;
L_101dbea1: ;
    g->edx = edx;
    return 0x80808080u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dbdb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dbdb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
