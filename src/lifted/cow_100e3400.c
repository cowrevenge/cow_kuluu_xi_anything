/* f_0x100e3400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e3400(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    wr8(sp0 - 0x58u, 1u);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (arg3 == 0u) goto L_100e34eb;
    if (rd8(arg3) == 0u) goto L_100e34eb;
    if ((uint8_t)arg1 - 4u > 0x1au)
    {
        eax = (uint8_t)arg1 - 4u;
        edx = in_edx;
        goto L_100e34d4;
    }
    t1 = rd32(COW_IMG(0x100e3548u) + rd8(COW_IMG(0x100e3554u) + (uint8_t)arg1 - 4u) * 4u);
    switch (t1 - RD)
    {
    case 0x100e3453u: ecx = rd8(COW_IMG(0x100e3554u) + (uint8_t)arg1 - 4u); goto L_100e3453;
    case 0x100e347eu: ecx = rd8(COW_IMG(0x100e3554u) + (uint8_t)arg1 - 4u); goto L_100e347e;
    case 0x100e34d4u: eax = (uint8_t)arg1 - 4u; ecx = rd8(COW_IMG(0x100e3554u) + (uint8_t)arg1 - 4u); edx = in_edx; goto L_100e34d4;
    default: rt_fatal(g, COW_IMG(0x100e344cu), "switch");
    }
    return 0;
L_100e3453: ;
    wr32(sp0 - 0x68u, 5u);
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x64u;
    t7 = cow_call_regs(g, COW_IMG(0x100e8f70u), (uint8_t)arg1 - 4u, g->ecx, g->edx, 1, 1, 5u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 > 1u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_100e34d4;
    }
    eax = t7;
    ecx = t8;
    wr16(sp0 - 0x4cu, 0x24u);
    wr32(sp0 - 0x68u, sp0 - 0x54u);
    g->eax = eax;
    g->esp = sp0 - 0x64u;
    t10 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    return (t10 & 0xffffff00u) | 1u;
L_100e347e: ;
    if ((uint8_t)arg1 == 5u)
    {
        wr8(sp0 - 0x58u, 1u);
    }
    else
    {
        if ((uint8_t)arg1 == 0x1bu)
        {
            wr8(sp0 - 0x58u, 2u);
        }
        else
        {
            if ((uint8_t)arg1 == 0x1eu)
            {
                wr8(sp0 - 0x58u, 3u);
            }
        }
    }
    t2 = rd32(sp0 - 0x58u);
    wr32(sp0 - 0x68u, t2);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x74u, 0u);
    g->eax = t2;
    g->edx = in_edx;
    g->esp = sp0 - 0x64u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, t2);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 1u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_100e34d4;
    }
    eax = t3;
    edx = t5;
    wr16(sp0 - 0x4cu, 0x25u);
    wr32(sp0 - 0x68u, sp0 - 0x54u);
    g->eax = eax;
    g->esp = sp0 - 0x64u;
    t6 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    return (t6 & 0xffffff00u) | 1u;
L_100e34d4: ;
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, 0xb5u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x64u;
    t11 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xb5u, 0u, 0u);
    t12 = g->ecx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t11;
        goto L_100e34f4;
    }
    eax = t11;
L_100e34eb: ;
    return eax & 0xffffff00u;
L_100e34f4: ;
    wr8(edx + 5u, (uint8_t)arg2);
    wr8(edx + 4u, (uint8_t)arg1);
    edi = arg3;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t13 = ~ecx - 1u;
    if (t13 <= 0x96u)
    {
        eax = t13;
    }
    else
    {
        eax = 0x96u;
    }
    esi = arg3;
    edi = edx + 6u;
    ecx = eax >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = eax & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(eax + edx + 6u, 0u);
    wr32(sp0 - 0x68u, eax - 1u);
    wr32(sp0 - 0x6cu, 8u);
    wr32(sp0 - 0x70u, edx);
    g->eax = eax - 1u;
    g->esp = sp0 - 0x64u;
    t14 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, edx, 8u, eax - 1u);
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    return (t14 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e3400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e3400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
