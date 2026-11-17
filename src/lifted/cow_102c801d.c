/* f_0x102c801d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c801d(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if (arg2 != 0u)
        {
            if (rd16(arg2 + 0x14u) != 0u) goto L_102c803d;
            eax = in_eax;
            ecx = self;
            edx = in_edx;
            loc_c = COW_IMG(0x103c96f8u);
L_102c8065: ;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_c);
        }
    }
L_102c80a6: ;
    return;
L_102c803d: ;
    g->eax = in_eax;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x102c379bu), g->eax, self, in_edx, 1, 4, arg1, arg2, 8u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, t2, t3, 1, 6, arg1, 0x200u, arg1, arg2, 8u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(arg1 + 0x1f4u, t4);
    if (t4 != 0u) goto L_102c806f;
    eax = t4;
    ecx = t5;
    edx = t6;
    loc_c = COW_IMG(0x103c96ccu);
    goto L_102c8065;
L_102c806f: ;
    if (rd16(arg2 + 0x14u) == 0u) goto L_102c8092;
    eax = 0u;
L_102c8077: ;
    wr16(eax * 2u + rd32(arg1 + 0x1f4u), rd16(arg3 + eax * 2u));
    if ((int32_t)(eax + 1u) < (int32_t)rd16(arg2 + 0x14u))
    {
        eax = eax + 1u;
        goto L_102c8077;
    }
L_102c8092: ;
    t7 = rd32(arg1 + 0x1f4u);
    wr32(arg2 + 8u, rd32(arg2 + 8u) | 0x40u);
    wr32(arg2 + 0xb8u, rd32(arg2 + 0xb8u) | 8u);
    wr32(arg2 + 0x7cu, t7);
    goto L_102c80a6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c801d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c801d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
