/* f_0x102c4adb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c4adb(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_314;
    uint32_t loc_318;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 812u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x308u, in_ebx);
    wr32(sp0 - 0x30cu, in_esi);
    wr32(sp0 - 0x310u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x68u) & 1u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x68u);
        esi = rd32(sp0 + 4u);
        goto L_102c4af8;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x68u);
    esi = rd32(sp0 + 4u);
    wr32(sp0 - 0x314u, COW_IMG(0x103c88e8u));
    loc_314 = COW_IMG(0x103c88e8u);
L_102c4b21: ;
    wr32(sp0 - 0x318u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x308u;
    t1 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, esi, loc_314, in_edi, in_esi);
    t2 = g->edx;
    eax = t1;
    ecx = rd32(sp0 - 0x314u);
    edx = t2;
L_102c4b29: ;
    t3 = rd8(esi + 0x126u);
    wr32(esi + 0x68u, rd32(esi + 0x68u) | 2u);
    if ((t3 & 2u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | t3;
        goto L_102c4b3f;
    }
    ecx = (ecx & 0xffffff00u) | t3;
    wr32(sp0 - 0x314u, COW_IMG(0x103c8890u));
    loc_314 = COW_IMG(0x103c8890u);
L_102c4b01: ;
    wr32(sp0 - 0x318u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x310u;
    t4 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, loc_314);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x31cu, arg3);
    eax = t4;
    ecx = t5;
    edx = t6;
L_102c4b0a: ;
    wr32(sp0 - 0x320u, esi);
    g->esp = sp0 - 0x30cu;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, esi, arg3, rd32(sp0 - 0x318u), rd32(sp0 - 0x314u), rd32(sp0 - 0x310u));
L_102c4c15: ;
    g->ebx = rd32(sp0 - 0x308u);
    g->esi = rd32(sp0 - 0x30cu);
    g->edi = rd32(sp0 - 0x310u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c4af8: ;
    if ((eax & 4u) == 0u) goto L_102c4b18;
    wr32(sp0 - 0x314u, COW_IMG(0x103c88d0u));
    ecx = self;
    edx = in_edx;
    loc_314 = COW_IMG(0x103c88d0u);
    goto L_102c4b01;
L_102c4b18: ;
    if ((eax & 2u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c4b29;
    }
    wr32(sp0 - 0x314u, COW_IMG(0x103c88b8u));
    loc_314 = COW_IMG(0x103c88b8u);
    goto L_102c4b21;
L_102c4b3f: ;
    if (arg3 > 0x300u) goto L_102c4b57;
    wr32(sp0 - 0x314u, 3u);
    t7 = cow_divu(g, arg3, 3u);
    t8 = cow_modu(g, arg3, 3u);
    if (t8 == 0u) goto L_102c4b71;
    eax = t7;
    edx = t8;
L_102c4b57: ;
    wr32(sp0 - 0x314u, COW_IMG(0x103c8878u));
    wr32(sp0 - 0x318u, esi);
    if ((uint8_t)ecx == 3u)
    {
        loc_318 = esi;
        goto L_102c4b6a;
    }
    loc_318 = esi;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x310u;
    t9 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, loc_318, COW_IMG(0x103c8878u));
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x31cu, arg3);
    eax = t9;
    ecx = t10;
    edx = t11;
    goto L_102c4b0a;
L_102c4b6a: ;
    g->esp = sp0 - 0x308u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, loc_318, COW_IMG(0x103c8878u), in_edi, in_esi);
L_102c4b71: ;
    wr32(sp0 - 0x314u, 3u);
    t12 = cow_divs(g, arg3, 3u);
    t13 = cow_mods(g, arg3, 3u);
    if ((int32_t)t12 <= 0)
    {
        eax = t12;
        ecx = 3u;
        edx = t13;
        ebx = t12;
    }
    else
    {
        edx = t13;
        ebx = t12;
        wr32(sp0 + 4u, ebx);
        ecx = 3u;
        edi = sp0 - 0x302u;
L_102c4b88: ;
        wr32(sp0 - 0x314u, 3u);
        wr32(sp0 - 0x318u, sp0 + 0xcu);
        wr32(sp0 - 0x31cu, esi);
        g->eax = sp0 + 0xcu;
        g->ecx = ecx;
        g->esp = sp0 - 0x308u;
        t14 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, esi, sp0 + 0xcu, 3u, in_edi, in_esi);
        t15 = g->ecx;
        t16 = g->edx;
        wr8(edi - 2u, (uint8_t)arg3);
        wr8(edi - 1u, (uint8_t)(arg3 >> 8u));
        wr8(edi, (uint8_t)(arg3 >> 0x10u));
        wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
        if (rd32(sp0 + 4u) != 1u)
        {
            ecx = t15;
            edx = t16;
            edi = edi + 3u;
            goto L_102c4b88;
        }
        eax = (t14 & 0xffffff00u) | (uint8_t)(arg3 >> 0x10u);
        ecx = t15;
        edx = t16;
    }
    wr32(sp0 - 0x314u, 0u);
    wr32(sp0 - 0x318u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x304u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, esi, 0u, in_edi, in_esi, in_ebx);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x31cu, ebx);
    wr32(sp0 - 0x320u, sp0 - 0x304u);
    wr32(sp0 - 0x324u, arg2);
    wr32(sp0 - 0x328u, esi);
    g->eax = sp0 - 0x304u;
    g->esp = sp0 - 0x314u;
    t19 = cow_call_regs(g, COW_IMG(0x102c845au), g->eax, t17, t18, 1, 5, esi, arg2, sp0 - 0x304u, ebx, rd32(sp0 - 0x318u));
    t20 = g->ecx;
    t21 = g->edx;
    if (rd8(esi + 0x126u) == 3u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        if (arg2 != 0u)
        {
            if ((rd8(arg2 + 8u) & 0x10u) != 0u)
            {
                if (rd16(esi + 0x11au) > (uint16_t)ebx)
                {
                    edi = esi + 0x11au;
                    wr32(sp0 - 0x314u, COW_IMG(0x103c8850u));
                    wr32(sp0 - 0x318u, esi);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x310u;
                    t22 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, COW_IMG(0x103c8850u));
                    t23 = g->edx;
                    wr16(edi, (uint16_t)ebx);
                    eax = t22;
                    ecx = COW_IMG(0x103c8850u);
                    edx = t23;
                }
                if (rd16(arg2 + 0x16u) > (uint16_t)ebx)
                {
                    wr32(sp0 - 0x314u, COW_IMG(0x103c8824u));
                    wr32(sp0 - 0x318u, esi);
                    g->esp = sp0 - 0x310u;
                    cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, COW_IMG(0x103c8824u));
                    wr16(arg2 + 0x16u, (uint16_t)ebx);
                }
            }
        }
    }
    goto L_102c4c15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c4adb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c4adb(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
