/* f_0x101299f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101299f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg16 = rd32(g->esp + 0x40u);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if (arg16 > 0xau)
    {
        eax = self;
        goto L_10129b07;
    }
    t1 = rd32(COW_IMG(0x10129b10u) + arg16 * 4u);
    switch (t1 - RD)
    {
    case 0x10129a08u: goto L_10129a08;
    case 0x10129a26u: goto L_10129a26;
    case 0x10129a44u: goto L_10129a44;
    case 0x10129a5fu: goto L_10129a5f;
    case 0x10129a76u: goto L_10129a76;
    case 0x10129a8du: goto L_10129a8d;
    case 0x10129aa0u: goto L_10129aa0;
    case 0x10129ab3u: goto L_10129ab3;
    case 0x10129ac6u: goto L_10129ac6;
    case 0x10129ad9u: goto L_10129ad9;
    case 0x10129aecu: goto L_10129aec;
    default: rt_fatal(g, COW_IMG(0x10129a01u), "switch");
    }
    return 0;
L_10129a08: ;
    wr32(sp0 - 0xcu, 0u);
    esi = sp0 + 4u;
    edi = sp0 - 0x48u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10129b40u), g->eax, g->ecx, in_edx, 0, 16, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10129a26: ;
    wr32(sp0 - 0xcu, 8u);
    esi = sp0 + 4u;
    edi = sp0 - 0x48u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10129b80u), g->eax, g->ecx, in_edx, 0, 16, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), 8u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10129a44: ;
    if ((uint8_t)arg1 == 5u) goto L_10129a58;
    if ((uint8_t)arg1 == 0xdu) goto L_10129a58;
    if ((uint8_t)arg1 != 0xd2u)
    {
        eax = (self & 0xffffff00u) | (uint8_t)arg1;
        goto L_10129b07;
    }
L_10129a58: ;
    return (self & 0xffffff00u) | 1u;
L_10129a5f: ;
    if ((uint8_t)arg1 == 6u) goto L_10129a6f;
    if ((uint8_t)arg1 != 0xeu)
    {
        eax = (self & 0xffffff00u) | (uint8_t)arg1;
        goto L_10129b07;
    }
L_10129a6f: ;
    return (self & 0xffffff00u) | 1u;
L_10129a76: ;
    if ((uint8_t)arg1 == 0xd5u) goto L_10129a86;
    if ((uint8_t)arg1 != 0xd6u)
    {
        eax = (self & 0xffffff00u) | (uint8_t)arg1;
        goto L_10129b07;
    }
L_10129a86: ;
    return (self & 0xffffff00u) | 1u;
L_10129a8d: ;
    if ((uint8_t)arg1 == 0xdbu) goto L_10129a99;
    if ((uint8_t)arg1 != 0xdcu)
    {
        eax = (self & 0xffffff00u) | (uint8_t)arg1;
        goto L_10129b07;
    }
L_10129a99: ;
    return (self & 0xffffff00u) | 1u;
L_10129aa0: ;
    if ((uint8_t)arg1 == 0xddu) goto L_10129aac;
    if ((uint8_t)arg1 != 0xdeu)
    {
        eax = (self & 0xffffff00u) | (uint8_t)arg1;
        goto L_10129b07;
    }
L_10129aac: ;
    return (self & 0xffffff00u) | 1u;
L_10129ab3: ;
    if ((uint8_t)arg1 == 0xd3u) goto L_10129abf;
    if ((uint8_t)arg1 != 0xd4u)
    {
        eax = (self & 0xffffff00u) | (uint8_t)arg1;
        goto L_10129b07;
    }
L_10129abf: ;
    return (self & 0xffffff00u) | 1u;
L_10129ac6: ;
    if ((uint8_t)arg1 == 1u) goto L_10129ad2;
    if ((uint8_t)arg1 != 9u)
    {
        eax = (self & 0xffffff00u) | (uint8_t)arg1;
        goto L_10129b07;
    }
L_10129ad2: ;
    return (self & 0xffffff00u) | 1u;
L_10129ad9: ;
    if ((uint8_t)arg1 == 4u) goto L_10129ae5;
    if ((uint8_t)arg1 != 0xcu)
    {
        eax = (self & 0xffffff00u) | (uint8_t)arg1;
        goto L_10129b07;
    }
L_10129ae5: ;
    return (self & 0xffffff00u) | 1u;
L_10129aec: ;
    if ((uint8_t)arg1 == 2u) goto L_10129b00;
    if ((uint8_t)arg1 == 0xau) goto L_10129b00;
    if ((uint8_t)arg1 == 3u) goto L_10129b00;
    if ((uint8_t)arg1 != 0xbu)
    {
        eax = (self & 0xffffff00u) | (uint8_t)arg1;
        goto L_10129b07;
    }
L_10129b00: ;
    return (self & 0xffffff00u) | 1u;
L_10129b07: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101299f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101299f0(g);
    g->esp = sp0;
    rt_return(g, r, 64u);
}
/* COW_ADAPTER END */
