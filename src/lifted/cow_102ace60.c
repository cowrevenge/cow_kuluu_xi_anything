/* f_0x102ace60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102ace60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 136u);

    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ecx = self;
        goto L_102acf13;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    edi = rd32(sp0 + 4u);
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102acf13;
    }
    ecx = rd32(eax + 0x14u);
    if (arg2 != 0u) goto L_102aceae;
    wr32(sp0 - 0x5cu, 0xebu);
    wr32(sp0 - 0x60u, COW_IMG(0x103bec10u));
    wr32(sp0 - 0x64u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bec10u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x103bebacu));
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bebacu), COW_IMG(0x103b379cu));
    return;
L_102aceae: ;
    wr32(sp0 - 0x5cu, arg2);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 4u);
    wr32(sp0 - 0x68u, sp0 + 4u);
    wr32(sp0 + 4u, 1u);
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
    wr32(sp0 - 0x5cu, eax);
    t4 = rd32(sp0 + 4u);
    wr32(sp0 - 0x60u, t4);
    wr32(sp0 - 0x64u, COW_IMG(0x103becc8u));
    wr32(sp0 - 0x68u, sp0 - 0x50u);
    g->ecx = t4;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x103becc8u), t4, eax, rd32(sp0 - 0x58u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x6cu, arg2);
    wr32(sp0 - 0x70u, 0x50u);
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, sp0 - 0x50u);
    g->edx = t6;
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x50u, 1u, 0x50u, arg2);
    t7 = g->edx;
    wr32(sp0 - 0x7cu, arg2);
    t8 = rd32(edi + 0x34u);
    wr32(sp0 - 0x80u, t8);
    g->ecx = t8;
    g->edx = t7;
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x102a9dd0u), 10, t8, arg2, sp0 - 0x50u, 1u, 0x50u, arg2, sp0 - 0x50u, COW_IMG(0x103becc8u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu));
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x84u, arg2);
    g->edi = edi;
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x10311f70u), 3, arg2, rd32(sp0 - 0x80u), arg2);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    return;
L_102acf13: ;
    wr32(sp0 - 0x5cu, 0xe8u);
    wr32(sp0 - 0x60u, COW_IMG(0x103bec10u));
    wr32(sp0 - 0x64u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bec10u));
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x103beb6cu));
    wr32(sp0 - 0x6cu, COW_IMG(0x103beaa4u));
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103beb6cu));
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ace60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ace60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
