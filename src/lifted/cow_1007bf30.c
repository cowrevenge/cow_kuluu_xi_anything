/* f_0x1007bf30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1007bf30(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_cc_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 244u);

    wr32(sp0 - 0xd0u, in_ebx);
    wr32(sp0 - 0xd4u, in_ebp);
    wr32(sp0 - 0xd8u, in_esi);
    wr32(sp0 - 0xdcu, in_edi);
    if (rd8(COW_IMG(0x10487e48u)) != 0u) goto L_1007c1bd;
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
    if (rd8(COW_IMG(0x10482f18u)) != 0u) goto L_1007c1bd;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f18u));
    if (arg1 == 0u) goto L_1007c1bd;
    if (rd16(COW_IMG(0x10485f7au)) == 0u) goto L_1007c1bd;
    if (rd32(arg1) == 0u) goto L_1007c1bd;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xdcu;
    t1 = cow_call_regs(g, COW_IMG(0x101cbe50u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1007c1a5;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 0xdcu;
    t4 = cow_call_regs(g, COW_IMG(0x101cbe60u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_1007c1a5;
    }
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u) goto L_1007c1bd;
    eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    edx = rd32(arg1);
    esi = rd32(COW_IMG(0x10480af0u) + rd32(arg1) * 4u);
    if (esi == 0u) goto L_1007c1bd;
    if ((rd32(arg1 + 4u) & 0xff000000u) == 0u) goto L_1007c0ec;
    ebp = rd32(arg1 + 4u);
    if (edx < 0x700u) goto L_1007bfe3;
    if (!(rd32(esi + 0x12cu) >> 0x1eu & 1u)) goto L_1007c1bd;
L_1007bfe3: ;
    if (!(rd32(ecx + 0x120u) >> 9u & 1u)) goto L_1007c1bd;
    if ((uint8_t)arg4 != 0u) goto L_1007c028;
    if (!(rd32(esi + 0x120u) >> 9u & 1u)) goto L_1007c1bd;
    if (rd32(esi + 0xa0u) == 0u) goto L_1007c028;
    eax = rd32(esi + 0xa0u);
    if (rd16(eax + 0xb2u) != 0u) goto L_1007c0ec;
L_1007c028: ;
    if (!(rd32(ecx + 0x128u) >> 6u & 1u)) goto L_1007c087;
    eax = rd32(ecx + 0x128u) >> 6u;
    if ((uint8_t)arg5 == 0u)
    {
        t6 = rd32(ecx + 0x78u);
        wr32(sp0 - 0xa8u, t6);
        wr32(sp0 - 0xa4u, t6);
        wr16(sp0 - 0xa0u, 0xacu);
        wr32(sp0 - 0xe0u, sp0 - 0xa8u);
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0x98u, 0u);
        wr8(sp0 - 0x58u, 0u);
        wr8(sp0 - 0x57u, 0u);
        g->esp = sp0 - 0xdcu;
        cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0xa8u);
    }
L_1007c077: ;
    g->ebx = rd32(sp0 - 0xd0u);
    g->esi = rd32(sp0 - 0xd8u);
    g->edi = rd32(sp0 - 0xdcu);
    g->ebp = rd32(sp0 - 0xd4u);
    return 1u;
L_1007c087: ;
    if ((uint8_t)arg4 != 0u) goto L_1007c13d;
    t7 = rd32(esi + 0xcu);
    wr32(sp0 - 0xb0u, t7);
    t8 = rd32(ecx + 8u);
    wr32(sp0 - 0xc4u, t8);
    d9 = (double)(float)fr(g, (double)rdf32(esi + 4u) - (double)rdf32(ecx + 4u));
    wrf32(sp0 - 0xccu, (float)d9);
    t10 = rd32(ecx + 0xcu);
    wr32(sp0 - 0xc0u, t10);
    d11 = fr(g, cow_bits2f(t7) - cow_bits2f(t10));
    d12 = fr(g, (double)rdf32(esi + 8u) - cow_bits2f(t8));
    d13 = fr(g, sqrt(fr(g, fr(g, fr(g, d11 * d11) + fr(g, d12 * d12)) + fr(g, d9 * d9))));
    if ((cow_fsw(g, d13, rdf64(COW_IMG(0x1032cf50u)), 2u) & 0x4100u) != 0u)
    {
        loc_cc_f = d9;
        goto L_1007c13d;
    }
    eax = cow_fsw(g, d13, rdf64(COW_IMG(0x1032cf50u)), 2u) & 0x4100u;
L_1007c0ec: ;
    if ((uint8_t)arg5 != 0u) goto L_1007c077;
    t17 = rd32(ecx + 0x78u);
    wr32(sp0 - 0x54u, t17);
    t18 = rd32(ecx + 0x78u);
    wr32(sp0 - 0x50u, t18);
    wr32(sp0 - 0xe0u, sp0 - 0x54u);
    wr16(sp0 - 0x4cu, 9u);
    wr8(sp0 - 4u, 0u);
    g->esp = sp0 - 0xdcu;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    g->ebx = rd32(sp0 - 0xd0u);
    g->esi = rd32(sp0 - 0xd8u);
    g->edi = rd32(sp0 - 0xdcu);
    g->ebp = rd32(sp0 - 0xd4u);
    return 1u;
L_1007c13d: ;
    if ((int32_t)rd32(esi + 0x170u) < 2) goto L_1007c14d;
    eax = rd32(esi + 0x170u);
    if ((int32_t)eax <= 3) goto L_1007c1bd;
L_1007c14d: ;
    wr32(sp0 - 0xe0u, arg3);
    wr32(sp0 - 0xe4u, arg2);
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, ebp);
    wr32(sp0 - 0xf0u, edx);
    g->eax = arg3;
    g->ecx = arg2;
    g->esp = sp0 - 0xc4u;
    t14 = cow_cdecl(g, COW_IMG(0x100780a0u), 11, edx, ebp, 0u, arg2, arg3, rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), cow_f2bits(loc_cc_f), rd32(sp0 - 0xc8u));
    t15 = g->ecx;
    if (t14 != 0u) goto L_1007c1bd;
    eax = t14;
    ecx = t15;
    if (rd32(esi + 0x128u) >> 5u & 1u)
    {
        edx = rd32(esi + 0x128u) >> 5u;
    }
    else
    {
        edx = rd32(esi + 0x128u) >> 5u;
        wr8(COW_IMG(0x10482f18u), 1u);
    }
    wr8(COW_IMG(0x10485a70u), 0u);
    t16 = (eax & 0xffff0000u) | rd16(arg1);
    wr32(sp0 - 0xe0u, t16);
    g->esp = sp0 - 0xdcu;
    cow_thiscall_cdecl(g, COW_IMG(0x100fc320u), ecx, 1, t16);
    g->ebx = rd32(sp0 - 0xd0u);
    g->esi = rd32(sp0 - 0xd8u);
    g->edi = rd32(sp0 - 0xdcu);
    g->ebp = rd32(sp0 - 0xd4u);
    return 1u;
L_1007c1a5: ;
    if ((uint8_t)arg5 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg5;
        wr32(sp0 - 0xe0u, 0x4bu);
        g->esp = sp0 - 0xdcu;
        cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x4bu);
    }
L_1007c1bd: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007bf30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007bf30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
