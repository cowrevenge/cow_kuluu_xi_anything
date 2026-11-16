/* f_0x101a2480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101a2480(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_244;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 620u);

    wr32(sp0 - 0x248u, in_ebx);
    wr32(sp0 - 0x24cu, in_esi);
    wr32(sp0 - 0x250u, COW_IMG(0x1037aa5cu));
    wr32(sp0 - 0x254u, arg1);
    g->ecx = self;
    g->esp = sp0 - 0x238u;
    t1 = cow_call_regs(g, COW_IMG(0x10311ef0u), in_eax, g->ecx, in_edx, 1, 7, arg1, COW_IMG(0x1037aa5cu), in_esi, in_ebx, rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        goto L_101a251f;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    wr32(sp0 - 0x250u, COW_IMG(0x10353df4u));
    wr32(sp0 - 0x254u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x238u;
    t4 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, edx, 1, 7, esi, COW_IMG(0x10353df4u), in_esi, in_ebx, rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu));
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        wr8(eax + 1u, 0u);
        wr32(sp0 - 0x250u, sp0 - 0x244u);
        wr32(sp0 - 0x254u, COW_IMG(0x1037aa50u));
        wr32(sp0 - 0x258u, esi);
        g->eax = sp0 - 0x244u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x24cu;
        t7 = cow_cdecl(g, COW_IMG(0x10313683u), 3, esi, COW_IMG(0x1037aa50u), sp0 - 0x244u);
        t8 = g->ecx;
        t9 = g->edx;
        wr8(esi, 0u);
        if (t7 == 1u)
        {
            ecx = t8;
            edx = t9;
            goto L_101a24de;
        }
        eax = t7;
        ecx = t8;
        edx = t9;
        wr32(sp0 - 0x244u, 1u);
L_101a24eb: ;
        g->eax = eax;
        g->esp = sp0 - 0x24cu;
        t10 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
        wr32(arg2, t10);
        wr32(arg3, 0x3e8u);
    }
L_101a2512: ;
    g->ebx = rd32(sp0 - 0x248u);
    g->esi = rd32(sp0 - 0x24cu);
    return 0u;
L_101a24de: ;
    if ((int32_t)rd32(sp0 - 0x244u) < 0) goto L_101a2512;
    eax = rd32(sp0 - 0x244u);
    if ((int32_t)eax > 60) goto L_101a2512;
    goto L_101a24eb;
L_101a251f: ;
    wr32(sp0 - 0x250u, in_edi);
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0u);
    wr32(sp0 - 0x25cu, 0x200u);
    wr32(sp0 - 0x260u, sp0 - 0x200u);
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t11 = ~ecx - 1u;
    wr32(sp0 - 0x264u, t11);
    wr32(sp0 - 0x268u, arg1);
    g->esp = sp0 - 0x250u;
    cow_thiscall(g, COW_IMG(0x101b7280u), rd32(COW_IMG(0x10662d40u)), 6, arg1, t11, sp0 - 0x200u, 0x200u, 0u, 0u);
    wr32(sp0 - 0x254u, sp0 - 0x244u);
    wr32(sp0 - 0x258u, sp0 - 0x240u);
    wr32(sp0 - 0x25cu, COW_IMG(0x1036ff70u));
    wr32(sp0 - 0x260u, sp0 - 0x200u);
    g->eax = sp0 - 0x240u;
    g->esp = sp0 - 0x254u;
    t12 = cow_cdecl(g, COW_IMG(0x10313683u), 3, sp0 - 0x200u, COW_IMG(0x1036ff70u), sp0 - 0x240u);
    esi = sp0 - 0x240u;
    edi = COW_IMG(0x1037aa48u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_101a2512;
    eax = t12;
    if ((int32_t)rd32(sp0 - 0x244u) <= 0) goto L_101a2512;
    ecx = rd32(sp0 - 0x244u);
    if ((int32_t)ecx > 60) goto L_101a2512;
    if (eax == 1u)
    {
        wr32(sp0 - 0x244u, eax);
        loc_244 = eax;
    }
    g->eax = eax;
    g->esp = sp0 - 0x24cu;
    t13 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t14 = rd32(sp0 - 0x248u);
    t15 = rd32(sp0 - 0x24cu);
    wr32(arg2, t13);
    t16 = rd32(sp0 - 0x244u) * 0x3e8u;
    wr32(arg3, t16);
    g->ebx = t14;
    g->esi = t15;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a2480(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
