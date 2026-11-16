/* f_0x1028d4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1028d4b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((rd8(rd32(arg1 + 0x54u) + rd32(sp0 + 8u) * 4u) & 0x20u) != 0u) goto L_1028d526;
    eax = rd32(arg1 + 0x54u);
    ebp = rd32(sp0 + 8u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102798f0u), 2, arg1, ebp);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(arg1 + 0x44u);
    wr32(sp0 + 8u, 0u);
    if ((int32_t)t3 <= 0) goto L_1028d526;
    eax = t3;
    ecx = t1;
    edx = t2;
    edi = 0u;
L_1028d4dc: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x10279890u), 2, arg1, edi);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(t4) != 0xb0001u)
    {
        ecx = t5;
        edx = t6;
        goto L_1028d51a;
    }
    ecx = t5;
    edx = t6;
    esi = t4;
    if ((int32_t)rd32(esi + 0x28u) <= 0) goto L_1028d516;
    eax = rd32(esi + 0x28u);
    edi = 0u;
L_1028d4f9: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x1027c9a0u), 5, esi, edi, in_edi, in_esi, in_ebp);
    t8 = g->edx;
    if (t7 + 0x24u == rd32(ebp * 4u + rd32(arg1 + 0x50u)))
    {
        ecx = rd32(arg1 + 0x50u);
        goto L_1028d52d;
    }
    ecx = rd32(arg1 + 0x50u);
    edx = t8;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 0x28u))
    {
        eax = rd32(esi + 0x28u);
        edi = edi + 1u;
        goto L_1028d4f9;
    }
L_1028d516: ;
    edi = rd32(sp0 + 8u);
L_1028d51a: ;
    t11 = rd32(arg1 + 0x44u);
    wr32(sp0 + 8u, edi + 1u);
    if ((int32_t)(edi + 1u) < (int32_t)t11)
    {
        eax = t11;
        edi = edi + 1u;
        goto L_1028d4dc;
    }
L_1028d526: ;
    return 0u;
L_1028d52d: ;
    t9 = rd32(sp0 + 8u);
    wr32(arg3, edi);
    g->eax = t9;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x10279b80u), 2, arg1, t9);
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028d4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028d4b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
