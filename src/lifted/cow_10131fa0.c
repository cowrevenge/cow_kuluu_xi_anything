/* f_0x10131fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10131fa0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 8u);
    wr32(sp0 - 0x1cu, 0xau);
    wr32(sp0 - 0x18u, 0xbu);
    wr32(sp0 - 0x14u, 0xcu);
    wr32(sp0 - 0x10u, 0xdu);
    wr32(sp0 - 0xcu, 0xeu);
    wr32(sp0 - 8u, 0xfu);
    wr32(sp0 - 4u, 0x10u);
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    edi = 0u;
L_10131ff2: ;
    t1 = rd32(edi * 4u + sp0 - 0x24u);
    wr32(sp0 - 0x34u, t1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t2 = cow_cdecl(g, COW_IMG(0x100eb530u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_10132026;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    esi = t1;
L_10132003: ;
    if (rd16(eax) != (uint16_t)arg1)
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
        goto L_1013201d;
    }
    wr32(sp0 - 0x34u, esi);
    t5 = (edx & 0xffffff00u) | rd8(eax + 2u);
    wr32(sp0 - 0x38u, t5);
    g->ebx = self;
    g->esp = sp0 - 0x30u;
    t6 = cow_fastcall(g, COW_IMG(0x10131f10u), self, t5, 2, t5, esi);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        goto L_10132037;
    }
    ecx = t7;
    edx = t8;
L_1013201d: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t9 = cow_stdcall(g, COW_IMG(0x100eb570u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_10132003;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
L_10132026: ;
    if (edi + 1u < 9u)
    {
        edi = edi + 1u;
        goto L_10131ff2;
    }
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    return eax & 0xffffff00u;
L_10132037: ;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10131fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10131fa0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
