/* f_0x10207d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10207d10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    wr16(sp0 - 0x28u, 0u);
    wr16(sp0 - 0x26u, 0u);
    wr16(sp0 - 0x24u, 0u);
    wr16(sp0 - 0x22u, 0u);
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    esi = 0u;
L_10207d31: ;
    wr32(sp0 - 0x40u, esi);
    wr32(sp0 - 0x44u, 0x1200u);
    t1 = (eax & 0xffffff00u) | rd8(self + 0x1cu);
    wr32(sp0 - 0x48u, t1);
    g->edi = self;
    g->eax = t1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t2 = cow_cdecl(g, COW_IMG(0x100fcbc0u), 3, t1, 0x1200u, esi);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = (uint8_t)t2;
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = (uint8_t)t2;
        edx = t4;
        ebx = (uint8_t)t2;
        if (esi == 0u) goto L_10207d5d;
        if (esi == 1u) goto L_10207d5d;
        ebx = ebx + 0x2100u;
L_10207d63: ;
        wr32(sp0 - 0x40u, 1u);
        wr32(sp0 - 0x44u, 1u);
        wr32(sp0 - 0x48u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t5 = cow_stdcall(g, COW_IMG(0x10207980u), 1, esi);
        t6 = g->edx;
        wr32(sp0 - 0x48u, t5);
        wr32(sp0 - 0x4cu, sp0 - 0x28u);
        g->ebx = ebx;
        g->edi = self;
        g->esp = sp0 - 0x3cu;
        cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x28u, t5, 1u, 1u);
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x44u, 0x80808080u);
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x4cu, 0x3f800000u);
        t7 = rd32(sp0 - 0x26u);
        wr32(sp0 - 0x50u, t7);
        t8 = rd32(sp0 - 0x28u);
        wr32(sp0 - 0x54u, t8);
        wr32(sp0 - 0x58u, ebx);
        g->eax = t8;
        g->edx = t7;
        t9 = rd32(COW_IMG(0x10621808u));
        t10 = cow_thiscall(g, COW_IMG(0x1015bd70u), t9, 7, ebx, t8, t7, 0x3f800000u, 0u, 0x80808080u, 0u);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    if ((int32_t)(esi + 1u) < 14)
    {
        esi = esi + 1u;
        goto L_10207d31;
    }
    wr32(sp0 - 0x40u, sp0 - 0x28u);
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(self + 8u), g->edx, 0, 1, sp0 - 0x28u);
    wr16(sp0 - 0x28u, (uint16_t)(rd16(sp0 - 0x28u) + 0x17u));
    wr16(sp0 - 0x26u, (uint16_t)(rd16(sp0 - 0x26u) + 0x94u));
    wr32(sp0 - 0x2cu, 0xffffffdbu - self);
    eax = 0xffffffdbu - self;
    esi = self + 0x25u;
    edi = self;
L_10207dd3: ;
    t13 = cow_divs(g, eax + esi, 3u);
    t14 = cow_mods(g, eax + esi, 3u);
    t15 = rd8(esi - 8u);
    wr32(sp0 - 0x40u, t15);
    wr32(sp0 - 0x44u, COW_IMG(0x10385568u));
    wr32(sp0 - 0x48u, sp0 - 0x20u);
    g->ecx = rd32(sp0 - 0x26u);
    g->edx = sp0 - 0x20u;
    t16 = rd32(sp0 - 0x26u);
    t17 = rd32(sp0 - 0x28u);
    t18 = rd8(esi);
    t19 = rd8(esi - 8u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10385568u), t15, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x4cu, 0x3f800000u);
    wr32(sp0 - 0x50u, 0x3f800000u);
    wr32(sp0 - 0x54u, 1u);
    t22 = (-(t18 < t19) & 0xffffbfc0u) - 0x7f7f7f80u;
    wr32(sp0 - 0x58u, t22);
    wr32(sp0 - 0x5cu, sp0 - 0x20u);
    t23 = t14 * 0xeu + t16;
    wr32(sp0 - 0x60u, t23);
    t24 = t13 * 0x3cu + t17 + 0x10u;
    wr32(sp0 - 0x64u, t24);
    g->eax = sp0 - 0x20u;
    g->esp = sp0 - 0x48u;
    t25 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t20, 7, t24, t23, sp0 - 0x20u, t22, 1u, 0x3f800000u, 0x3f800000u);
    wr32(sp0 - 0x68u, rd8(esi));
    wr32(sp0 - 0x6cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x70u, sp0 - 0x20u);
    g->ecx = rd8(esi);
    g->edx = sp0 - 0x20u;
    t26 = rd8(esi);
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t26, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x74u, t22);
    wr32(sp0 - 0x78u, sp0 - 0x20u);
    wr32(sp0 - 0x7cu, t23);
    wr32(sp0 - 0x80u, t24);
    g->eax = sp0 - 0x20u;
    g->edx = t28;
    t29 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t24, t23, sp0 - 0x20u, t22, sp0 - 0x20u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
    t30 = g->edx;
    if ((int32_t)(esi - self - 0x24u) <= 7)
    {
        esi = esi + 1u;
        edi = t22;
        goto L_10207dcf;
    }
    eax = t29;
    edx = t30;
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    g->edx = edx;
    return eax;
L_10207d5d: ;
    ebx = ebx + 0x2000u;
    goto L_10207d63;
L_10207dcf: ;
    eax = rd32(sp0 - 0x2cu);
    goto L_10207dd3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10207d10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10207d10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
