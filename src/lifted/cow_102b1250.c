/* f_0x102b1250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b1250(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_5c;
    uint32_t t1;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 140u);

    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        esi = rd32(sp0 + 8u);
        goto L_102b1284;
    }
    wr32(sp0 - 0x5cu, 0x1ebu);
    wr32(sp0 - 0x60u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x64u, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x103bebacu));
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bebacu), COW_IMG(0x103b379cu));
    return;
L_102b1284: ;
    wr32(sp0 - 0x5cu, esi);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 4u);
    wr32(sp0 - 0x68u, sp0 + 8u);
    wr32(sp0 + 8u, 2u);
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 8u, 4u, 1u, esi);
    edi = sp0 - 0x50u;
    eax = 0u;
    ecx = 0x14u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(sp0 - 1u, 0xau);
    t4 = rd32(arg1 + 0x3cu);
    wr32(sp0 - 0x6cu, t4);
    wr32(sp0 - 0x70u, 2u);
    wr32(sp0 - 0x74u, COW_IMG(0x103bf978u));
    wr32(sp0 - 0x78u, sp0 - 0x50u);
    g->ecx = t4;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x103bf978u), 2u, t4, sp0 + 8u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x7cu, esi);
    wr32(sp0 - 0x80u, 0x50u);
    wr32(sp0 - 0x84u, 1u);
    wr32(sp0 - 0x88u, sp0 - 0x50u);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x50u, 1u, 0x50u, esi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x5cu, esi);
    wr32(sp0 - 0x60u, arg1);
    if ((int32_t)rd32(sp0 + 8u) > 1)
    {
        eax = rd32(sp0 + 8u);
        ecx = t7;
        edx = t8;
        loc_5c = esi;
        goto L_102b12f4;
    }
    eax = rd32(sp0 + 8u);
    ecx = t7;
    edx = t8;
    loc_5c = esi;
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x102b1310u), 2, arg1, loc_5c);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    return;
L_102b12f4: ;
    g->esp = sp0 - 0x58u;
    cow_call_regs(g, COW_IMG(0x102b14d0u), g->eax, g->ecx, edx, 1, 2, arg1, loc_5c);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b1250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b1250(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
