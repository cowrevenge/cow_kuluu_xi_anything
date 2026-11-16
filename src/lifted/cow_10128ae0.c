/* f_0x10128ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10128ae0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg2) == 0u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(arg2);
        goto L_10128c31;
    }
    edx = (in_edx & 0xffffff00u) | rd8(arg2);
    t1 = rd32(sp0 + 0xcu) + 5u;
    t2 = rd32(sp0 + 4u);
    t3 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t1);
    ebx = 0u;
    ebp = t2;
    esi = 0u;
    edi = t3 + 4u;
    loc_4 = 0u;
L_10128b0f: ;
    if (rd8(arg2 + ebx) != 4u)
    {
        eax = arg2 + ebx;
        ecx = (arg2 & 0xffffff00u) | rd8(arg2 + ebx);
        goto L_10128bee;
    }
    eax = arg2 + ebx;
    ecx = (arg2 & 0xffffff00u) | rd8(arg2 + ebx);
    if (rd8(edi) != 0x7fu)
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        goto L_10128bda;
    }
    if ((uint32_t)(int8_t)rd8(rd32(sp0 + 0xcu)) + 5u > 0x3du) goto L_10128bd7;
    eax = (uint32_t)(int8_t)rd8(rd32(sp0 + 0xcu)) + 5u;
    t4 = rd32(COW_IMG(0x10128c40u) + rd8(COW_IMG(0x10128c50u) + eax) * 4u);
    switch (t4 - RD)
    {
    case 0x10128b4au: ecx = rd8(COW_IMG(0x10128c50u) + eax); goto L_10128b4a;
    case 0x10128b7bu: ecx = rd8(COW_IMG(0x10128c50u) + eax); goto L_10128b7b;
    case 0x10128ba9u: goto L_10128ba9;
    case 0x10128bd7u: goto L_10128bd7;
    default: rt_fatal(g, COW_IMG(0x10128b43u), "switch");
    }
    return 0;
L_10128b4a: ;
    edx = ebp + esi;
    loc_1c = edi;
    loc_20 = ebp + esi;
L_10128b51: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, loc_20, loc_1c, 2u);
    t9 = g->edx;
    t10 = rd32(sp0 + 0xcu) + 8u;
    wr32(sp0 + 0xcu, t10);
    edx = t9;
    ebx = ebx + 2u;
    esi = esi + 2u;
    edi = edi + 8u;
    loc_4 = loc_4 + 1u;
L_10128c15: ;
    if (rd8(arg2 + ebx) != 0u) goto L_10128b0f;
    wr8(ebp + esi, 0u);
    g->edx = edx;
    return loc_4;
L_10128b7b: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10312090u), ebp + esi, g->ecx, g->edx, 1, 3, ebp + esi, edi, 3u);
    t7 = g->edx;
    t8 = rd32(sp0 + 0xcu) + 8u;
    wr32(sp0 + 0xcu, t8);
    edx = t7;
    ebx = ebx + 3u;
    esi = esi + 3u;
    edi = edi + 8u;
    loc_4 = loc_4 + 1u;
    goto L_10128c15;
L_10128ba9: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, ebp + esi, edi, 4u);
    t5 = g->edx;
    t6 = rd32(sp0 + 0xcu) + 8u;
    wr32(sp0 + 0xcu, t6);
    edx = t5;
    ebx = ebx + 4u;
    esi = esi + 4u;
    edi = edi + 8u;
    loc_4 = loc_4 + 1u;
    goto L_10128c15;
L_10128bd7: ;
    ebx = ebx + 1u;
    goto L_10128c15;
L_10128bda: ;
    if ((uint8_t)eax == 0x1eu) goto L_10128be2;
    if ((uint8_t)eax != 0x1fu) goto L_10128c15;
L_10128be2: ;
    eax = ebp + esi;
    loc_1c = edi;
    loc_20 = ebp + esi;
    goto L_10128b51;
L_10128bee: ;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t11 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, eax);
    wr32(sp0 + 4u, t11);
    g->edx = ebp + esi;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10312090u), arg2 + ebx, g->ecx, g->edx, 1, 3, ebp + esi, arg2 + ebx, t11);
    t12 = g->edx;
    edx = t12;
    ebx = ebx + rd32(sp0 + 4u);
    esi = esi + rd32(sp0 + 4u);
    goto L_10128c15;
L_10128c31: ;
    wr8(rd32(sp0 + 4u), 0u);
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10128ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10128ae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
