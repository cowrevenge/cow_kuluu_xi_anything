/* f_0x101f0060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101f0060(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (arg2 == 0u) goto L_101f0199;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_101f0199;
    if ((int32_t)rd32(sp0 + 4u) < 0) goto L_101f0199;
    ebp = rd32(sp0 + 4u);
    if ((int32_t)ebp >= 18) goto L_101f0199;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xcu, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x101eff80u), rd32(COW_IMG(0x1066377cu)), 0);
    t3 = g->edx;
    wr32(sp0 - 0x20u, ebp);
    g->edx = t3;
    t4 = rd32(COW_IMG(0x104dfd98u));
    t5 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, ebp);
    t6 = g->edx;
    t7 = rd32(sp0 - 0x10u);
    wr8(sp0 + 4u, 1u);
    if ((uint8_t)t5 <= 1u)
    {
        eax = t5;
        edx = t6;
        goto L_101f0190;
    }
    edi = ebp * 0xdecu + t4 + 0x9894u;
    loc_10 = (t7 & 0xffffffu) | (uint8_t)t5 << 0x18u;
L_101f00dc: ;
    wr32(sp0 - 0x20u, rd16(edi));
    g->edx = rd16(edi);
    t8 = rd32(COW_IMG(0x10621808u));
    t9 = rd16(edi);
    g->esp = sp0 - 0x1cu;
    t10 = cow_thiscall(g, COW_IMG(0x1015bc40u), t8, 1, t9);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_101f0177;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    esi = t10;
    if ((uint8_t)arg3 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        goto L_101f0106;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg3;
    if (rd8(edi + 8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 8u);
        goto L_101f0177;
    }
    eax = (eax & 0xffffff00u) | rd8(edi + 8u);
L_101f0106: ;
    if ((uint8_t)arg4 == 0u) goto L_101f0122;
    eax = (eax & 0xffffff00u) | (uint8_t)arg4;
    wr32(sp0 - 0x20u, ebp);
    t13 = (eax & 0xffffff00u) | rd8(edi + 2u);
    wr32(sp0 - 0x24u, t13);
    g->edx = edx;
    t14 = rd32(COW_IMG(0x1066377cu));
    g->esp = sp0 - 0x1cu;
    t15 = cow_thiscall(g, COW_IMG(0x101eff30u), t14, 2, t13, ebp);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_101f0177;
    }
    ecx = t16;
    edx = t17;
L_101f0122: ;
    wr32(sp0 - 0x20u, esi);
    t18 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t18 + 1u));
    g->esp = sp0 - 0x14u;
    t19 = cow_call_regs(g, COW_IMG(0x1015a680u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t20 = g->edx;
    g->edx = t20;
    g->esp = sp0 - 0x1cu;
    t21 = cow_thiscall(g, COW_IMG(0x1015b270u), t19, 0);
    t22 = g->edx;
    wr32(sp0 - 0x20u, t21);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    g->edx = t22;
    cow_cdecl(g, COW_IMG(0x10159f20u), 2, sp0 - 0xcu, t21);
    t23 = g->edx;
    t24 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0xcu, 0);
    t25 = g->ecx;
    wr32(sp0 - 0x20u, t24);
    wr32(sp0 - 0x24u, esi + 0x1b4u);
    wr32(sp0 - 0x28u, arg2);
    g->eax = arg2;
    g->edx = esi + 0x1b4u;
    t26 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x10662f60u)), t25, 3, arg2, esi + 0x1b4u, t24);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        goto L_101f01a2;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    wr8(esi + 0x1b3u, (uint8_t)(rd8(esi + 0x1b3u) - 1u));
L_101f0177: ;
    t33 = rd8(sp0 + 4u);
    t34 = rd8(sp0 - 0xdu);
    wr8(sp0 + 4u, (uint8_t)(t33 + 1u));
    if ((uint8_t)(t33 + 1u) < (uint8_t)t34)
    {
        edi = edi + 0x2cu;
        goto L_101f00dc;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)(t33 + 1u);
L_101f0190: ;
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, edx, 0);
L_101f0199: ;
    return 0u;
L_101f01a2: ;
    t29 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t29 - 1u));
    if ((uint8_t)arg4 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg4;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg4;
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t29 - 1u);
        wr32(sp0 - 0x20u, ebp);
        t30 = (ecx & 0xffffff00u) | rd8(edi + 2u);
        wr32(sp0 - 0x24u, t30);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t31 = cow_thiscall(g, COW_IMG(0x101efee0u), rd32(COW_IMG(0x1066377cu)), 2, t30, ebp);
        t32 = g->edx;
        eax = t31;
        edx = t32;
    }
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, edx, 0);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f0060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f0060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
