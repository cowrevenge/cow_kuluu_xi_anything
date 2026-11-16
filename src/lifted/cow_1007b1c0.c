/* f_0x1007b1c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_1007b1c0(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_1007b2b1;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    if ((int8_t)arg1 < 0)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        goto L_1007b2b1;
    }
    if ((int8_t)arg1 >= 16)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        goto L_1007b2b1;
    }
    if (rd8(ecx + (uint32_t)(int8_t)arg1 * 8u + 0x19a58u) == 0u)
    {
        eax = ((uint32_t)(int8_t)arg1 & 0xffffff00u) | rd8(ecx + (uint32_t)(int8_t)arg1 * 8u + 0x19a58u);
        goto L_1007b2b1;
    }
    eax = ((uint32_t)(int8_t)arg1 & 0xffffff00u) | rd8(ecx + (uint32_t)(int8_t)arg1 * 8u + 0x19a58u);
    ebx = ecx + (uint32_t)(int8_t)arg1 * 8u + 0x19a54u;
    if ((int8_t)arg3 < 0) goto L_1007b219;
    eax = (eax & 0xffffff00u) | (uint8_t)arg3;
    if ((uint32_t)(int8_t)eax != rd8(ebx + 5u)) goto L_1007b2b1;
L_1007b219: ;
    if (rd8(ebx + 5u) > 0x10u)
    {
        eax = rd8(ebx + 5u);
        goto L_1007b2b1;
    }
    eax = rd8(ebx + 5u);
    t1 = rd32(COW_IMG(0x1007b348u) + rd8(COW_IMG(0x1007b370u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x1007b236u: goto L_1007b236;
    case 0x1007b23eu: goto L_1007b23e;
    case 0x1007b246u: goto L_1007b246;
    case 0x1007b24eu: goto L_1007b24e;
    case 0x1007b256u: goto L_1007b256;
    case 0x1007b25eu: goto L_1007b25e;
    case 0x1007b266u: goto L_1007b266;
    case 0x1007b26eu: goto L_1007b26e;
    case 0x1007b276u: goto L_1007b276;
    case 0x1007b2b1u: goto L_1007b2b1;
    default: rt_fatal(g, COW_IMG(0x1007b22fu), "switch");
    }
    return 0;
L_1007b236: ;
    esi = rd32(COW_IMG(0x10666e2cu));
L_1007b27c: ;
    if (esi == 0u) goto L_1007b2b1;
    if (rd8(esi + rd32(esi + 0xcu) + 0x18u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + rd32(esi + 0xcu) + 0x18u);
        goto L_1007b2b1;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + rd32(esi + 0xcu) + 0x18u);
    edx = rd32(esi + 0xcu);
    edi = 0u;
L_1007b28d: ;
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x1021cb80u), esi, 1, edi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u) goto L_1007b2a3;
    eax = t2;
    ecx = t3;
    edx = t4;
    if (rd8(ebx + 4u) == rd8(eax + 2u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 2u);
        goto L_1007b2ba;
    }
L_1007b2a3: ;
    if ((int32_t)(edi + 1u) < (int32_t)rd8(esi + rd32(esi + 0xcu) + 0x18u))
    {
        eax = rd8(esi + rd32(esi + 0xcu) + 0x18u);
        edx = rd32(esi + 0xcu);
        edi = edi + 1u;
        goto L_1007b28d;
    }
    eax = rd8(esi + rd32(esi + 0xcu) + 0x18u);
L_1007b2b1: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_1007b23e: ;
    esi = rd32(COW_IMG(0x10666e4cu));
    goto L_1007b27c;
L_1007b246: ;
    esi = rd32(COW_IMG(0x10666e50u));
    goto L_1007b27c;
L_1007b24e: ;
    esi = rd32(COW_IMG(0x10666e54u));
    goto L_1007b27c;
L_1007b256: ;
    esi = rd32(COW_IMG(0x10666e58u));
    goto L_1007b27c;
L_1007b25e: ;
    esi = rd32(COW_IMG(0x10666e5cu));
    goto L_1007b27c;
L_1007b266: ;
    esi = rd32(COW_IMG(0x10666e60u));
    goto L_1007b27c;
L_1007b26e: ;
    esi = rd32(COW_IMG(0x10666e64u));
    goto L_1007b27c;
L_1007b276: ;
    esi = rd32(COW_IMG(0x10666e68u));
    goto L_1007b27c;
L_1007b2ba: ;
    wr32(sp0 - 0x1cu, rd16(eax));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t5 = cow_stdcall(g, COW_IMG(0x1015bc40u), 1, rd16(eax));
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        goto L_1007b2b1;
    }
    eax = t5;
    edx = t6;
    esi = t5;
    t7 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t7 + 1u));
    g->eax = (eax & 0xffffff00u) | (uint8_t)(t7 + 1u);
    g->esp = sp0 - 0x18u;
    t8 = cow_fastcall(g, COW_IMG(0x1018d2b0u), sp0 - 0xcu, edx, 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x1cu, esi);
    g->esp = sp0 - 0x10u;
    t11 = cow_call_regs(g, COW_IMG(0x1015a680u), g->eax, g->ecx, t10, 1, 3, esi, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t12 = g->edx;
    g->esp = sp0 - 0x18u;
    t13 = cow_thiscall(g, COW_IMG(0x1015b270u), t11, 0);
    t14 = g->ecx;
    wr32(sp0 - 0x1cu, t13);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    g->ebx = ebx;
    g->edx = sp0 - 0xcu;
    t15 = cow_cdecl(g, COW_IMG(0x10159f20u), 2, sp0 - 0xcu, t13);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0xcu, 0);
    t18 = g->edx;
    wr32(sp0 - 0x1cu, t17);
    wr32(sp0 - 0x20u, esi + 0x1b4u);
    wr32(sp0 - 0x24u, arg2);
    g->eax = esi + 0x1b4u;
    g->edx = t18;
    t19 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x10662f60u)), arg2, 3, arg2, esi + 0x1b4u, t17);
    t20 = g->edx;
    t21 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t21 - 1u));
    g->eax = (t19 & 0xffffff00u) | (uint8_t)(t21 - 1u);
    t22 = cow_thiscall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, 0);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return (t22 & 0xffffff00u) | (uint8_t)t19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007b1c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007b1c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
