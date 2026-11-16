/* f_0x10141cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10141cc0(Guest* g)
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
    uint32_t t21;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    if ((uint8_t)arg1 < 0xcu) goto L_10141cda;
    return in_eax & 0xffffff00u;
L_10141cda: ;
    if ((int32_t)(arg2 - 0x7400u) >= 0) goto L_10141cf2;
    return arg2 & 0xffffff00u;
L_10141cf2: ;
    wr32(sp0 - 0x2cu, arg1);
    esi = COW_IMG(0x10578262u);
    edi = sp0 - 0x18u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_cdecl(g, COW_IMG(0x10141c20u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint16_t)t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_10141d42;
    }
    ecx = t2;
    edx = t3;
    esi = 0u;
L_10141d12: ;
    wr32(sp0 - 0x2cu, esi);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t4 = cow_cdecl(g, COW_IMG(0x10141c20u), 1, esi);
    t5 = g->edx;
    if ((uint16_t)t4 == arg2 - 0x7400u)
    {
        eax = (uint16_t)t4;
        goto L_10141dd8;
    }
    eax = (uint16_t)t4;
    edx = t5;
    if (rd16(COW_IMG(0x10578262u) + esi * 2u) == arg2 - 0x7400u) goto L_10141dd8;
    ecx = rd16(COW_IMG(0x10578262u) + esi * 2u);
    if ((int32_t)(esi + 1u) < 12)
    {
        esi = esi + 1u;
        goto L_10141d12;
    }
L_10141d8e: ;
    wr16(COW_IMG(0x10578262u) + (uint8_t)arg1 * 2u, (uint16_t)(arg2 - 0x7400u));
L_10141d9c: ;
    wr32(sp0 - 0x2cu, COW_IMG(0x10578262u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t11 = cow_cdecl(g, COW_IMG(0x10141c50u), 1, COW_IMG(0x10578262u));
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x2cu;
    t14 = cow_stdcall(g, COW_IMG(0x10141c40u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x30u, t14);
    t17 = (t14 & 0xffff0000u) | rd8(COW_IMG(0x10485641u));
    wr32(sp0 - 0x34u, t17);
    t18 = cow_cdecl(g, COW_IMG(0x100fda60u), 2, t17, t14);
    if ((int32_t)t11 <= (int32_t)(uint16_t)t18)
    {
        eax = (uint16_t)t18;
        goto L_10141de2;
    }
    eax = (uint16_t)t18;
    esi = sp0 - 0x18u;
    edi = COW_IMG(0x10578262u);
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
L_10141dd8: ;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return eax & 0xffffff00u;
L_10141d42: ;
    wr32(sp0 - 0x2cu, arg1);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t6 = cow_cdecl(g, COW_IMG(0x10141c20u), 1, arg1);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint16_t)t6 != arg2 - 0x7400u)
    {
        ecx = t7;
        edx = t8;
        goto L_10141d66;
    }
    eax = (uint16_t)t6;
    ecx = t7;
    edx = t8;
    wr16(COW_IMG(0x10578262u) + (uint8_t)arg1 * 2u, 0xffffu);
    goto L_10141d9c;
L_10141d66: ;
    esi = 0u;
L_10141d68: ;
    wr32(sp0 - 0x2cu, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x28u;
    t9 = cow_cdecl(g, COW_IMG(0x10141c20u), 1, esi);
    t10 = g->ecx;
    if ((uint16_t)t9 == arg2 - 0x7400u)
    {
        eax = (uint16_t)t9;
        goto L_10141dd8;
    }
    eax = (uint16_t)t9;
    ecx = t10;
    if (rd16(COW_IMG(0x10578262u) + esi * 2u) == arg2 - 0x7400u) goto L_10141dd8;
    edx = rd16(COW_IMG(0x10578262u) + esi * 2u);
    if ((int32_t)(esi + 1u) < 12)
    {
        esi = esi + 1u;
        goto L_10141d68;
    }
    goto L_10141d8e;
L_10141de2: ;
    wr8(COW_IMG(0x1057825cu), rd8(COW_IMG(0x1057825cu)) | 4u);
    t19 = rd32(sp0 - 0x20u);
    t20 = rd32(sp0 - 0x24u);
    t21 = rd32(sp0 - 0x28u);
    wr8(COW_IMG(0x105782aau), 1u);
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = t20;
    g->edi = t21;
    g->ebp = t19;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10141cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10141cc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
