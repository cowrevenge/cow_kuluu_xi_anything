/* f_0x100d95d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100d95d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x14u, 0u);
    if (rd8(rd32(sp0 + 4u)) == 0u)
    {
        eax = 0u;
        ecx = self;
        edx = in_edx;
        edi = 0u;
        goto L_100d9766;
    }
    eax = 0u;
    ecx = self;
    edx = in_edx;
    ebx = (in_ebx & 0xffffff00u) | rd8(rd32(sp0 + 4u));
    ebp = rd32(sp0 + 4u);
    loc_14 = 0u;
L_100d95ee: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8((uint32_t)(int8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
        ecx = (uint32_t)(int8_t)ebx;
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        wr32(sp0 - 0x28u, 4u);
        wr32(sp0 - 0x2cu, (uint32_t)(int8_t)ebx);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint32_t)(int8_t)ebx, 4u, in_edi);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    if (eax == 0u) goto L_100d980a;
    wr32(sp0 + 4u, 0xau);
    if ((uint8_t)ebx != 0x30u)
    {
        edi = 0u;
        goto L_100d9647;
    }
    if (rd8(ebp + 1u) == 0x78u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(ebp + 1u);
        ebp = ebp + 1u;
        goto L_100d963b;
    }
    ebx = (ebx & 0xffffff00u) | rd8(ebp + 1u);
    ebp = ebp + 1u;
    if ((uint8_t)ebx != 0x58u)
    {
        edi = 0u;
        goto L_100d9647;
    }
L_100d963b: ;
    wr32(sp0 + 4u, 0x10u);
    edi = 0u;
L_100d9643: ;
    ebx = (ebx & 0xffffff00u) | rd8(ebp + 1u);
    ebp = ebp + 1u;
L_100d9647: ;
    if ((uint8_t)ebx >= 0x80u) goto L_100d9681;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        esi = (uint32_t)(int8_t)ebx;
        eax = rd8(esi * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
    }
    else
    {
        esi = (uint32_t)(int8_t)ebx;
        wr32(sp0 - 0x28u, 4u);
        wr32(sp0 - 0x2cu, esi);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t4 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, esi, 4u, in_edi);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    if (eax == 0u) goto L_100d9681;
    ecx = rd32(sp0 + 4u) * edi;
    edi = esi + rd32(sp0 + 4u) * edi - 0x30u;
    goto L_100d9643;
L_100d9681: ;
    if (rd32(sp0 + 4u) != 0x10u) goto L_100d96f4;
    if ((uint8_t)ebx >= 0x80u) goto L_100d96f4;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        esi = (uint32_t)(int8_t)ebx;
        eax = rd8(esi * 2u + rd32(COW_IMG(0x103d0030u))) & 0x80u;
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        esi = (uint32_t)(int8_t)ebx;
        wr32(sp0 - 0x28u, 0x80u);
        wr32(sp0 - 0x2cu, esi);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t7 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, esi, 0x80u, in_edi);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    if (eax == 0u) goto L_100d96f4;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(esi * 2u + rd32(COW_IMG(0x103d0030u))) & 2u;
    }
    else
    {
        wr32(sp0 - 0x28u, 2u);
        wr32(sp0 - 0x2cu, esi);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t10 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, esi, 2u, in_edi);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    edi = edi * 0x10u + esi - (-(eax != 0u) & 0x20u) - 0x37u;
    eax = (-(eax != 0u) & 0x20u) + 0x41u;
    goto L_100d9643;
L_100d96f4: ;
    if ((uint8_t)ebx != 0x2eu) goto L_100d971d;
    if ((int32_t)loc_14 >= 3) goto L_100d980a;
    eax = loc_14;
    t13 = rd8(ebp + 1u);
    wr32(eax * 4u + sp0 - 0x10u, edi);
    wr32(sp0 - 0x14u, eax + 1u);
    if ((uint8_t)t13 != 0u)
    {
        ebx = (ebx & 0xffffff00u) | t13;
        ebp = ebp + 1u;
        loc_14 = eax + 1u;
        eax = eax + 1u;
        goto L_100d95ee;
    }
    eax = eax + 1u;
L_100d975d: ;
    if (eax > 3u) goto L_100d980a;
L_100d9766: ;
    t17 = rd32(COW_IMG(0x100d9814u) + eax * 4u);
    switch (t17 - RD)
    {
    case 0x100d976du: goto L_100d976d;
    case 0x100d9790u: goto L_100d9790;
    case 0x100d97b8u: goto L_100d97b8;
    case 0x100d97ecu: goto L_100d97ec;
    default: rt_fatal(g, COW_IMG(0x100d9766u), "switch");
    }
    return 0;
L_100d971d: ;
    if ((uint8_t)ebx == 0u) goto L_100d9759;
    if ((uint8_t)ebx >= 0x80u) goto L_100d980a;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8((uint32_t)(int8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        edx = (uint32_t)(int8_t)ebx;
    }
    else
    {
        wr32(sp0 - 0x28u, 8u);
        wr32(sp0 - 0x2cu, (uint32_t)(int8_t)ebx);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t14 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), (uint32_t)(int8_t)ebx, 3, (uint32_t)(int8_t)ebx, 8u, in_edi);
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    }
    if (eax == 0u) goto L_100d980a;
L_100d9759: ;
    eax = loc_14;
    goto L_100d975d;
L_100d976d: ;
    if (edi > 0xffffffu) goto L_100d980a;
    t18 = rd32(sp0 - 0x10u) << 0x18u;
    t19 = ((t18 ^ edi) & 0xffffffu) ^ t18;
    eax = t18;
    ecx = t19;
    edi = t19;
L_100d97ec: ;
    if (arg2 != 0u)
    {
        wr32(sp0 - 0x28u, edi);
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t20 = cow_thiscall(g, rd32(COW_IMG(0x10329474u)), ecx, 1, edi);
        wr32(arg2, t20);
    }
    return 1u;
L_100d9790: ;
    if (edi > 0xffffu) goto L_100d980a;
    eax = rd32(sp0 - 0x10u) << 8u;
    edx = ((uint8_t)rd32(sp0 - 0xcu) | rd32(sp0 - 0x10u) << 8u) << 0x10u;
    edi = (uint16_t)edi | ((uint8_t)rd32(sp0 - 0xcu) | rd32(sp0 - 0x10u) << 8u) << 0x10u;
    goto L_100d97ec;
L_100d97b8: ;
    if (edi > 0xffu) goto L_100d980a;
    eax = (uint8_t)rd32(sp0 - 8u);
    ecx = (((uint8_t)rd32(sp0 - 0xcu) | rd32(sp0 - 0x10u) << 8u) << 8u | (uint8_t)rd32(sp0 - 8u)) << 8u;
    edx = rd32(sp0 - 0x10u) << 8u;
    edi = (uint8_t)edi | (((uint8_t)rd32(sp0 - 0xcu) | rd32(sp0 - 0x10u) << 8u) << 8u | (uint8_t)rd32(sp0 - 8u)) << 8u;
    goto L_100d97ec;
L_100d980a: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d95d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d95d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
