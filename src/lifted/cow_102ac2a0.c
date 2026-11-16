/* f_0x102ac2a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102ac2a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 144u);

    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ecx = self;
        goto L_102ac392;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    edi = rd32(sp0 + 4u);
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102ac392;
    }
    ecx = rd32(eax + 0x14u);
    if (arg2 != 0u) goto L_102ac2ee;
    wr32(sp0 - 0x5cu, 0x4c9u);
    wr32(sp0 - 0x60u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x64u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be980u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x103bebacu));
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bebacu), COW_IMG(0x103b379cu));
    return;
L_102ac2ee: ;
    wr32(sp0 - 0x5cu, arg2);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 4u);
    wr32(sp0 - 0x68u, sp0 + 4u);
    wr32(sp0 + 4u, 2u);
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 4u, 4u, 1u, arg2);
    if (rd32(edi + 0x34u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(edi + 0x34u);
        eax = rd32(eax + 0x14u);
    }
    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, eax);
    t4 = rd32(edi + 0x4cu);
    wr32(sp0 - 0x64u, t4);
    t5 = rd32(edi + 0x44u);
    wr32(sp0 - 0x68u, t5);
    t6 = rd32(sp0 + 4u);
    wr32(sp0 - 0x6cu, t6);
    wr32(sp0 - 0x70u, COW_IMG(0x103beb74u));
    wr32(sp0 - 0x74u, sp0 - 0x50u);
    g->ebx = edi + 0x4cu;
    g->ecx = sp0 - 0x50u;
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x103beb74u), t6, t5, t4);
    t7 = g->ecx;
    wr32(sp0 - 0x78u, arg2);
    wr32(sp0 - 0x7cu, 0x50u);
    wr32(sp0 - 0x80u, 1u);
    wr32(sp0 - 0x84u, sp0 - 0x50u);
    g->ecx = t7;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x74u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x50u, 1u, 0x50u, arg2);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x88u, arg2);
    t10 = rd32(edi + 0x34u);
    wr32(sp0 - 0x8cu, t10);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x64u;
    t11 = cow_cdecl(g, COW_IMG(0x102a9dd0u), 10, t10, arg2, sp0 - 0x50u, 1u, 0x50u, arg2, sp0 - 0x50u, COW_IMG(0x103beb74u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        ecx = t12;
        edx = t13;
    }
    else
    {
        ecx = t12;
        edx = t13;
        ebx = edi + 0x4cu;
        wr32(sp0 - 0x60u, arg2);
        wr32(sp0 - 0x64u, 1u);
        wr32(sp0 - 0x68u, 4u);
        wr32(sp0 - 0x6cu, ebx);
        g->esp = sp0 - 0x5cu;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, ebx, 4u, 1u, arg2);
        wr32(sp0 - 0x70u, arg2);
        wr32(sp0 - 0x74u, rd32(ebx));
        wr32(sp0 - 0x78u, 4u);
        t14 = rd32(edi + 0x48u);
        wr32(sp0 - 0x7cu, t14);
        g->ecx = rd32(ebx);
        g->edx = t14;
        t15 = rd32(ebx);
        g->esp = sp0 - 0x6cu;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, t14, 4u, t15, arg2);
        t16 = g->ecx;
        t17 = g->edx;
        ecx = t16;
        edx = t17;
    }
    wr32(sp0 - 0x60u, arg2);
    wr32(sp0 - 0x64u, 1u);
    wr32(sp0 - 0x68u, 4u);
    wr32(sp0 - 0x6cu, edi + 0x50u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, edi + 0x50u, 4u, 1u, arg2);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x70u, arg2);
    g->edi = edi + 0x50u;
    g->esp = sp0 - 0x64u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t19, 1, 3, arg2, rd32(sp0 - 0x6cu), 4u);
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    return;
L_102ac392: ;
    wr32(sp0 - 0x5cu, 0x4c6u);
    wr32(sp0 - 0x60u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x64u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t20 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be980u));
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x103beb6cu));
    wr32(sp0 - 0x6cu, COW_IMG(0x103beaa4u));
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103beb6cu));
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ac2a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ac2a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
