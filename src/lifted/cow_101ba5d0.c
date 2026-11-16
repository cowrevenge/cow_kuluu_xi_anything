/* f_0x101ba5d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101ba5d0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_esi);
    if (rd8(arg1) != 0x40u) goto L_101ba6a3;
    wr32(sp0 - 8u, 0x10u);
    wr32(sp0 - 0xcu, sp0 + 4u);
    wr32(sp0 - 0x10u, arg1 + 2u);
    g->eax = sp0 + 4u;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10313979u), 3, arg1 + 2u, sp0 + 4u, 0x10u);
    if ((uint32_t)(int8_t)rd8(arg1 + 1u) - 0x41u > 0x18u) goto L_101ba6a3;
    eax = t1;
    ecx = (uint32_t)(int8_t)rd8(arg1 + 1u) - 0x41u;
    t2 = rd32(COW_IMG(0x101ba6acu) + rd8(COW_IMG(0x101ba6c4u) + ecx) * 4u);
    switch (t2 - RD)
    {
    case 0x101ba610u: edx = rd8(COW_IMG(0x101ba6c4u) + ecx); goto L_101ba610;
    case 0x101ba61du: goto L_101ba61d;
    case 0x101ba658u: edx = rd8(COW_IMG(0x101ba6c4u) + ecx); goto L_101ba658;
    case 0x101ba665u: edx = rd8(COW_IMG(0x101ba6c4u) + ecx); goto L_101ba665;
    case 0x101ba674u: edx = rd8(COW_IMG(0x101ba6c4u) + ecx); goto L_101ba674;
    case 0x101ba6a3u: goto L_101ba6a3;
    default: rt_fatal(g, COW_IMG(0x101ba609u), "switch");
    }
    return 0;
L_101ba610: ;
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0xcu, 0x12u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, eax);
    t18 = g->ecx;
    eax = t17;
    ecx = t18;
L_101ba681: ;
    if (eax == 0u) goto L_101ba6a3;
    edx = eax;
    wr32(sp0 - 8u, in_edi);
    edi = edx;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t19 = rd32(sp0 - 4u);
    wr8(arg2, (uint8_t)((uint8_t)(~ecx - 1u) + 1u));
    g->esi = t19;
    return edx;
L_101ba61d: ;
    wr32(sp0 - 8u, in_ebx);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = rd32(COW_IMG(0x10456a28u));
        goto L_101ba639;
    }
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = rd32(COW_IMG(0x10456a28u));
    if (ecx == 2u) goto L_101ba63e;
    if (ecx == 3u) goto L_101ba63e;
L_101ba639: ;
    if ((int32_t)ecx > 1) goto L_101ba64b;
L_101ba63e: ;
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0xcu, 0x14u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, eax);
    t14 = g->ecx;
    eax = t13;
    ecx = t14;
    goto L_101ba681;
L_101ba64b: ;
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0xcu, 0x15u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x15u, eax);
    t16 = g->ecx;
    eax = t15;
    ecx = t16;
    goto L_101ba681;
L_101ba658: ;
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0xcu, 0x13u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x13u, eax);
    t12 = g->ecx;
    eax = t11;
    ecx = t12;
    goto L_101ba681;
L_101ba665: ;
    wr32(sp0 - 8u, eax);
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x1022bda0u), eax, ecx, edx, 1, 0);
    t8 = g->edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x1022bf00u), t7, 1, rd32(sp0 - 8u));
    t10 = g->ecx;
    eax = t9;
    ecx = t10;
    goto L_101ba681;
L_101ba674: ;
    wr32(sp0 - 8u, eax);
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x10223930u), eax, ecx, edx, 1, 0);
    t4 = g->edx;
    g->ecx = t3;
    g->esp = sp0 - 4u;
    t5 = cow_stdcall(g, COW_IMG(0x10223a90u), 1, rd32(sp0 - 8u));
    t6 = g->ecx;
    eax = t5;
    ecx = t6;
    goto L_101ba681;
L_101ba6a3: ;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba5d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ba5d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
