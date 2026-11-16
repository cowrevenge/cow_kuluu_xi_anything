/* f_0x101c5be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_101c5be0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self + 4u, COW_IMG(0x10337a84u));
    wr32(self + 8u, arg1);
    wr32(self, COW_IMG(0x10337c90u));
    wr32(self + 4u, COW_IMG(0x10337c8cu));
    wr32(self + 0x398u, arg2);
    if (arg5 == 0u) goto L_101c5c7e;
    edi = arg5;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t1 = ~ecx - 1u;
    g->eax = eax;
    t2 = rd32(COW_IMG(0x10662d40u));
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101b7280u), t2, 6, arg5, t1, self + 0x1d5u, arg2 + 1u, 0u, 0u);
    t4 = g->ecx;
    wr32(self + 0x39cu, t3);
    if ((int32_t)t3 <= 0) goto L_101c5c7e;
    ecx = t4;
    eax = arg5;
L_101c5c4c: ;
    t5 = rd8(eax);
    wr8(eax + self - arg5 + 0x12u, (uint8_t)t5);
    if ((uint8_t)t5 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t5;
        goto L_101c5c4c;
    }
    ecx = (ecx & 0xffffff00u) | t5;
    eax = self + 0x12u;
L_101c5c60: ;
    t6 = rd8(eax);
    wr8(eax + 0x38eu, (uint8_t)t6);
    if ((uint8_t)t6 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t6;
        goto L_101c5c60;
    }
    ecx = (ecx & 0xffffff00u) | t6;
    edi = arg5;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t7 = ~ecx - 1u;
    wr32(self + 0x690u, t7);
L_101c5c93: ;
    wr32(self + 0x69cu, arg4);
    t8 = rd32(self + 8u);
    wr32(self + 0x698u, arg3);
    if (t8 - 1u > 0xau) goto L_101c5d0c;
    eax = t8 - 1u;
    t9 = rd32(COW_IMG(0x101c5d78u) + eax * 4u);
    switch (t9 - RD)
    {
    case 0x101c5cb7u: goto L_101c5cb7;
    case 0x101c5cc8u: goto L_101c5cc8;
    case 0x101c5cd5u: goto L_101c5cd5;
    case 0x101c5ce7u: goto L_101c5ce7;
    case 0x101c5cf1u: goto L_101c5cf1;
    case 0x101c5cf8u: goto L_101c5cf8;
    default: rt_fatal(g, COW_IMG(0x101c5cb0u), "switch");
    }
    return 0;
L_101c5c7e: ;
    wr8(self + 0x12u, 0u);
    wr32(self + 0x39cu, 0u);
    wr8(self + 0x3a0u, 0u);
    wr32(self + 0x690u, 0u);
    goto L_101c5c93;
L_101c5cb7: ;
    wr8(self + 0xcu, 0u);
    wr8(self + 0xeu, 0u);
    wr8(self + 0xfu, 0u);
    wr8(self + 0x10u, 0u);
    wr8(self + 0x11u, 0u);
L_101c5d09: ;
    wr8(self + 0xdu, 0u);
L_101c5d0c: ;
    wr8(self + 0x694u, 0u);
    wr32(self + 0x6a4u, 0u);
    wr32(self + 0x6a8u, arg7);
    wr32(self + 0x6b0u, arg6);
    if (arg8 != 0x114u) goto L_101c5d62;
    t10 = rd16(COW_IMG(0x106218bau));
    t11 = rd16(COW_IMG(0x106218b6u));
    wr32(self + 0x6a0u, 0u);
    t12 = (uint32_t)(int16_t)(t10 - t11) - 0xacu;
    wr32(self + 0x6acu, t12);
    return self;
L_101c5cc8: ;
    wr8(self + 0xcu, 0u);
    wr8(self + 0xeu, 0u);
    wr8(self + 0x11u, 0u);
    eax = (eax & 0xffffff00u) | 1u;
L_101c5d03: ;
    wr8(self + 0xfu, (uint8_t)eax);
    wr8(self + 0x10u, (uint8_t)eax);
    goto L_101c5d09;
L_101c5cd5: ;
    wr8(self + 0xcu, 0u);
    wr8(self + 0xeu, 0u);
    wr8(self + 0xfu, 0u);
    wr8(self + 0x10u, 1u);
    wr8(self + 0x11u, 0u);
    goto L_101c5d09;
L_101c5ce7: ;
    wr8(self + 0xcu, 0u);
    wr8(self + 0xeu, 0u);
    eax = (eax & 0xffffff00u) | 1u;
L_101c5d00: ;
    wr8(self + 0x11u, (uint8_t)eax);
    goto L_101c5d03;
L_101c5cf1: ;
    wr8(self + 0xeu, 0u);
    eax = (eax & 0xffffff00u) | 1u;
L_101c5cfd: ;
    wr8(self + 0xcu, (uint8_t)eax);
    goto L_101c5d00;
L_101c5cf8: ;
    wr8(self + 0xeu, 1u);
    eax = (eax & 0xffffff00u) | 1u;
    goto L_101c5cfd;
L_101c5d62: ;
    wr32(self + 0x6acu, arg8);
    wr32(self + 0x6a0u, 0u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c5be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c5be0(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
