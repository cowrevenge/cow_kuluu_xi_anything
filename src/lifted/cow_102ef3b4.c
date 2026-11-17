/* f_0x102ef3b4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102ef3b4(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_54;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    wr32(sp0 - 0x54u, 0x10u);
    wr32(sp0 - 0x54u, 0x67u);
    esi = arg1;
    edi = sp0 - 0x44u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x54u, 0x10u);
    edi = arg1;
    eax = 0u;
    ecx = 0x67u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x54u, 0x2000u);
    wr32(sp0 - 0x58u, arg1);
    esi = sp0 - 0x44u;
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(arg1 + 0xa0u, 0x2000u);
    g->eax = 0x2000u;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t1 = cow_cdecl(g, COW_IMG(0x102f7637u), 2, arg1, 0x2000u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x5cu, 0x38u);
    wr32(arg1 + 0x9cu, t1);
    wr32(sp0 - 0x60u, COW_IMG(0x10347f48u));
    wr32(sp0 - 0x64u, arg1 + 0x64u);
    wr32(arg1 + 0x84u, COW_IMG(0x102f2089u));
    wr32(arg1 + 0x88u, COW_IMG(0x102f20dcu));
    wr32(arg1 + 0x8cu, arg1);
    g->eax = arg1 + 0x64u;
    g->esp = sp0 - 0x48u;
    t4 = cow_call_regs(g, COW_IMG(0x102f7121u), g->eax, t2, t3, 1, 7, arg1 + 0x64u, COW_IMG(0x10347f48u), 0x38u, arg1, 0x2000u, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0xfffffffau)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_102ef443;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    if (eax == 0xfffffffcu) goto L_102ef43c;
    if (eax == 0xfffffffeu) goto L_102ef43c;
    if (eax == 0u) goto L_102ef450;
    wr32(sp0 - 0x54u, COW_IMG(0x10347f34u));
    loc_54 = COW_IMG(0x10347f34u);
L_102ef448: ;
    wr32(sp0 - 0x58u, arg1);
    g->esi = esi;
    g->esp = sp0 - 0x54u;
    cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, ecx, edx, 1, 1, arg1);
    t7 = g->edx;
    ecx = rd32(sp0 - 0x54u);
    edx = t7;
L_102ef450: ;
    wr32(sp0 - 0x54u, 0u);
    t8 = rd32(arg1 + 0x9cu);
    wr32(arg1 + 0x70u, t8);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, arg1);
    t9 = rd32(arg1 + 0xa0u);
    wr32(arg1 + 0x74u, t9);
    g->eax = t9;
    g->esp = sp0 - 0x48u;
    t10 = cow_call_regs(g, COW_IMG(0x102f1fb7u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, 0u, in_edi, in_esi);
    t11 = g->edx;
    g->esi = in_esi;
    g->edx = t11;
    return t10;
L_102ef43c: ;
    wr32(sp0 - 0x54u, COW_IMG(0x10347f98u));
    loc_54 = COW_IMG(0x10347f98u);
    goto L_102ef448;
L_102ef443: ;
    wr32(sp0 - 0x54u, COW_IMG(0x10347f88u));
    loc_54 = COW_IMG(0x10347f88u);
    goto L_102ef448;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ef3b4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ef3b4(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
