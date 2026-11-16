/* f_0x100ef0e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ef0e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x44u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x40u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x3cu, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x38u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x34u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x30u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x2cu, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x28u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x24u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x20u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x1cu, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x18u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x14u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x10u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0xcu, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 8u, COW_IMG(0x100ef450u));
    wr32(sp0 - 4u, COW_IMG(0x100ef4b0u));
    if (rd32(COW_IMG(0x104df770u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        ecx = self;
        edx = in_edx;
        goto L_100ef174;
    }
    eax = rd32(COW_IMG(0x104df770u));
    if (rd32(arg1) != 0u) goto L_100ef14e;
    g->ecx = self;
    g->edx = arg1;
    g->esp = sp0 - 0x48u;
    cow_stdcall(g, COW_IMG(0x100edea0u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
L_100ef157: ;
    if (rd32(sp0 + rd32(edx) * 4u - 0x44u) == 0u)
    {
        eax = rd32(sp0 + rd32(edx) * 4u - 0x44u);
        esi = arg1;
    }
    else
    {
        eax = rd32(sp0 + rd32(edx) * 4u - 0x44u);
        wr32(sp0 - 0x4cu, edx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t6 = cow_thiscall_cdecl(g, eax, ecx, 1, edx);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
        esi = t6;
    }
    if (esi != 0xffffffffu) goto L_100ef189;
L_100ef174: ;
    wr32(sp0 - 0x4cu, 0xbb9u);
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t9 = cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xbb9u);
    return 0xffffffffu;
L_100ef14e: ;
    g->ecx = self;
    g->edx = arg1;
    g->esp = sp0 - 0x48u;
    t3 = cow_stdcall(g, COW_IMG(0x100edeb0u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_100ef174;
    }
    ecx = t4;
    edx = t5;
    goto L_100ef157;
L_100ef189: ;
    g->esp = sp0 - 0x48u;
    cow_call_regs(g, COW_IMG(0x100f9d50u), g->eax, g->ecx, edx, 1, 0);
    g->esi = rd32(sp0 - 0x48u);
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ef0e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ef0e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
