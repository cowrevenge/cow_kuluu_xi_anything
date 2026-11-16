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
    wr8(sp0 - 0xfu, 0xffu);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xcu, 0);
    t1 = g->edx;
    wr32(sp0 - 0x24u, ebp);
    g->eax = ebp * 0x37bu;
    g->ecx = rd32(COW_IMG(0x104dfd98u));
    g->edx = t1;
    t2 = rd32(COW_IMG(0x104dfd98u));
    t3 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, ebp);
    t4 = g->ecx;
    t5 = g->edx;
    wr8(sp0 - 0xdu, (uint8_t)t3);
    wr8(sp0 + 4u, 1u);
    if ((uint8_t)t3 <= 1u)
    {
        eax = t3;
        edx = t5;
        goto L_101efe50;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t3;
    edi = ebp * 0xdecu + t2 + 0x9894u;
L_101efd7a: ;
    wr32(sp0 - 0x24u, ebp);
    wr32(sp0 - 0x28u, edi);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t6 = cow_call_regs(g, COW_IMG(0x101cc3a0u), g->eax, ecx, edx, 1, 3, edi, ebp, rd32(sp0 - 0x20u));
    t7 = g->ecx;
    t8 = g->edx;
    wr8(sp0 - 0xeu, (uint8_t)t6);
    if ((uint8_t)arg3 == 0u)
    {
        eax = t6;
        goto L_101efd9f;
    }
    eax = t6;
    ecx = (t7 & 0xffffff00u) | (uint8_t)arg3;
    edx = t8;
    if (rd8(edi + 8u) == 0u) goto L_101efd9f;
    ecx = (ecx & 0xffffff00u) | rd8(edi + 8u);
    if ((uint8_t)eax == 0u) goto L_101efe3b;
L_101efd9f: ;
    wr32(sp0 - 0x24u, rd16(edi));
    g->eax = eax;
    g->edx = rd16(edi);
    t9 = rd32(COW_IMG(0x10621808u));
    t10 = rd16(edi);
    g->esp = sp0 - 0x20u;
    t11 = cow_thiscall(g, COW_IMG(0x1015bc40u), t9, 1, t10);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        goto L_101efe3b;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    esi = t11;
    wr32(sp0 - 0x24u, esi);
    t14 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t14 + 1u));
    g->eax = (eax & 0xffffff00u) | (uint8_t)(t14 + 1u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t15 = cow_cdecl(g, COW_IMG(0x1015a680u), 3, esi, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t16 = g->edx;
    g->edx = t16;
    g->esp = sp0 - 0x20u;
    t17 = cow_thiscall(g, COW_IMG(0x1015b270u), t15, 0);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x24u, t17);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    g->ebx = ebx;
    g->eax = sp0 - 0xcu;
    g->edx = t19;
    t20 = cow_cdecl(g, COW_IMG(0x10159f20u), 2, sp0 - 0xcu, t17);
    t21 = g->edx;
    t22 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0xcu, 0);
    wr32(sp0 - 0x24u, t22);
    wr32(sp0 - 0x28u, esi + 0x1b4u);
    wr32(sp0 - 0x2cu, arg2);
    g->edx = arg2;
    t23 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x10662f60u)), esi + 0x1b4u, 3, arg2, esi + 0x1b4u, t22);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 == 0u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        goto L_101efe29;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
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
    t26 = rd8(sp0 + 4u);
    wr8(sp0 - 0xfu, (uint8_t)t26);
    eax = (eax & 0xffffff00u) | t26;
L_101efe29: ;
    t29 = rd8(esi + 0x1b3u);
    t30 = rd8(sp0 - 0xdu);
    wr8(esi + 0x1b3u, (uint8_t)(t29 - 1u));
    eax = (eax & 0xffffff00u) | (uint8_t)(t29 - 1u);
    ebx = (ebx & 0xffffff00u) | t30;
L_101efe3b: ;
    t31 = rd8(sp0 + 4u);
    wr8(sp0 + 4u, (uint8_t)(t31 + 1u));
    if ((uint8_t)(t31 + 1u) < (uint8_t)ebx)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(t31 + 1u);
        edi = edi + 0x2cu;
        goto L_101efd7a;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)(t31 + 1u);
L_101efe50: ;
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t32 = cow_thiscall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, 0);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return (t32 & 0xffffff00u) | rd8(sp0 - 0xfu);
L_101efe65: ;
    t27 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t27 - 1u));
    g->eax = (eax & 0xffffff00u) | (uint8_t)(t27 - 1u);
    g->esp = sp0 - 0x20u;
    t28 = cow_thiscall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, 0);
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
