/* f_0x102c9c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102c9c50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    eax = 0u;
    edx = rd32(arg1 + 0x24u) + 0x1003u & 0xfffff000u;
    esi = rd32(arg1 + 0x24u);
    edi = rd32(arg1 + 0xcu);
L_102c9c71: ;
    if (edi != rd32(COW_IMG(0x103436d0u) + eax * 4u)) goto L_102c9c86;
    if (rd32(arg1 + 8u) == rd32(COW_IMG(0x10343690u) + eax * 4u)) goto L_102c9c8c;
L_102c9c86: ;
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        goto L_102c9c71;
    }
    eax = eax + 1u;
L_102c9c8c: ;
    if (eax != 0x10u) goto L_102c9c9c;
    return 0xffffffffu;
L_102c9c9c: ;
    wr32(sp0 - 0x24u, edx);
    t1 = rd32(COW_IMG(0x10343690u) + eax * 4u);
    wr32(arg1 + 8u, t1);
    t2 = rd32(COW_IMG(0x103436d0u) + eax * 4u);
    wr32(arg1 + 0xcu, t2);
    wr32(arg1 + 0x10u, 0x1000u);
    t3 = rd32(COW_IMG(0x10343710u) + eax * 4u);
    wr32(arg1 + 0x28u, 0x1000u);
    wr32(arg1 + 0x14u, t3);
    wr32(arg1 + 0x2cu, t3);
    t4 = rd32(COW_IMG(0x10343750u) + eax * 4u);
    wr32(sp0 - 8u, t4);
    t5 = rd32(COW_IMG(0x10343790u) + eax * 4u);
    wr32(sp0 - 4u, t5);
    t6 = rd32(COW_IMG(0x10343810u) + eax * 4u);
    wr32(sp0 - 0xcu, t6);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, 0xac44u);
    t7 = rd32(COW_IMG(0x10343650u) + eax * 4u);
    wr32(sp0 - 0x34u, t7);
    wr32(sp0 - 0x38u, 2u);
    t8 = rd32(COW_IMG(0x103437d0u) + eax * 4u);
    wr32(sp0 - 0x10u, t8);
    g->esp = sp0 - 0x20u;
    t9 = cow_cdecl(g, COW_IMG(0x102ca3b0u), 6, 2u, t7, 0xac44u, sp0 - 8u, sp0 - 0x10u, edx);
    if (t9 != 0u)
    {
        ebx = 0u;
    }
    else
    {
        ebx = 0x80000005u;
    }
    wr32(esi, 0u);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c9c50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c9c50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
