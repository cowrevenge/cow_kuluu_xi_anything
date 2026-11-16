/* f_0x101efd00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_101efd00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (arg2 == 0u)
    {
        eax = arg2;
        goto L_101efe88;
    }
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_101efe88;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if ((int32_t)rd32(sp0 + 4u) < 0) goto L_101efe88;
    ebp = rd32(sp0 + 4u);
    if ((int32_t)ebp >= 18) goto L_101efe88;
    g->edx = in_edx;
    t1 = rd32(sp0 - 0x10u);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xcu, 0);
    t2 = g->edx;
    wr32(sp0 - 0x24u, ebp);
    g->ecx = rd32(COW_IMG(0x104dfd98u));
    g->edx = t2;
    t3 = rd32(COW_IMG(0x104dfd98u));
    t4 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, ebp);
    t5 = g->ecx;
    t6 = g->edx;
    t7 = rd32(sp0 - 0x10u);
    wr8(sp0 + 4u, 1u);
    if ((uint8_t)t4 <= 1u)
    {
        eax = t4;
        edx = t6;
        loc_10 = (t7 & 0xffffffu) | (uint8_t)t4 << 0x18u;
        goto L_101efe50;
    }
    ecx = t5;
    edx = t6;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t4;
    edi = ebp * 0xdecu + t3 + 0x9894u;
    loc_10 = (t7 & 0xffffffu) | (uint8_t)t4 << 0x18u;
L_101efd7a: ;
    wr32(sp0 - 0x24u, ebp);
    wr32(sp0 - 0x28u, edi);
    g->ebx = ebx;
    g->esp = sp0 - 0x1cu;
    t8 = cow_call_regs(g, COW_IMG(0x101cc3a0u), g->eax, ecx, edx, 1, 3, edi, ebp, rd32(sp0 - 0x20u));
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)arg3 == 0u)
    {
        loc_10 = (rd32(sp0 - 0x10u) & 0xff00ffffu) | (uint8_t)t8 << 0x10u;
        goto L_101efd9f;
    }
    eax = t8;
    ecx = (t9 & 0xffffff00u) | (uint8_t)arg3;
    edx = t10;
    loc_10 = (rd32(sp0 - 0x10u) & 0xff00ffffu) | (uint8_t)t8 << 0x10u;
    if (rd8(edi + 8u) == 0u) goto L_101efd9f;
    ecx = (ecx & 0xffffff00u) | rd8(edi + 8u);
    if ((uint8_t)eax == 0u) goto L_101efe3b;
L_101efd9f: ;
    wr32(sp0 - 0x24u, rd16(edi));
    g->ebx = ebx;
    g->edx = rd16(edi);
    t11 = rd32(COW_IMG(0x10621808u));
    t12 = rd16(edi);
    g->esp = sp0 - 0x20u;
    t13 = cow_thiscall(g, COW_IMG(0x1015bc40u), t11, 1, t12);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_101efe3b;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    esi = t13;
    wr32(sp0 - 0x24u, esi);
    wr8(esi + 0x1b3u, (uint8_t)(rd8(esi + 0x1b3u) + 1u));
    t16 = rd8(esi + 0x1b3u);
    g->esp = sp0 - 0x18u;
    t17 = cow_call_regs(g, COW_IMG(0x1015a680u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t18 = g->edx;
    g->edx = t18;
    g->esp = sp0 - 0x20u;
    t19 = cow_thiscall(g, COW_IMG(0x1015b270u), t17, 0);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x24u, t19);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    g->ebx = ebx;
    g->edx = t21;
    cow_cdecl(g, COW_IMG(0x10159f20u), 2, sp0 - 0xcu, t19);
    t22 = g->edx;
    t23 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0xcu, 0);
    wr32(sp0 - 0x24u, t23);
    wr32(sp0 - 0x28u, esi + 0x1b4u);
    wr32(sp0 - 0x2cu, arg2);
    g->edx = arg2;
    t24 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x10662f60u)), esi + 0x1b4u, 3, arg2, esi + 0x1b4u, t23);
    t25 = g->ecx;
    t26 = g->edx;
    if ((uint8_t)t24 == 0u)
    {
        eax = t24;
        ecx = t25;
        edx = t26;
        goto L_101efe29;
    }
    eax = t24;
    ecx = t25;
    edx = t26;
    if (rd16(esi + 4u) == 4u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 4u);
        goto L_101efe19;
    }
    eax = (eax & 0xffff0000u) | rd16(esi + 4u);
    if ((uint16_t)eax != 5u) goto L_101efe65;
L_101efe19: ;
    if (rd8(sp0 - 0xeu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0xeu);
        goto L_101efe65;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0xeu);
    eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
    loc_10 = (rd32(sp0 - 0x10u) & 0xffff00ffu) | rd8(sp0 + 4u) << 8u;
L_101efe29: ;
    t29 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t29 - 1u));
    eax = (eax & 0xffffff00u) | (uint8_t)(t29 - 1u);
    ebx = (ebx & 0xffffff00u) | loc_10 >> 0x18u;
L_101efe3b: ;
    t30 = rd8(sp0 + 4u);
    wr8(sp0 + 4u, (uint8_t)(t30 + 1u));
    if ((uint8_t)(t30 + 1u) < (uint8_t)ebx)
    {
        edi = edi + 0x2cu;
        goto L_101efd7a;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)(t30 + 1u);
L_101efe50: ;
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t31 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, edx, 0);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return (t31 & 0xffffff00u) | rd8(sp0 - 0xfu);
L_101efe65: ;
    t27 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t27 - 1u));
    g->eax = (eax & 0xffffff00u) | (uint8_t)(t27 - 1u);
    g->esp = sp0 - 0x20u;
    t28 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, edx, 0);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return (t28 & 0xffffff00u) | rd8(sp0 + 4u);
L_101efe88: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101efd00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101efd00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
