/* f_0x1026d035 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1026d035(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, 0xccccccccu);
    wr32(sp0 - 0x14u, 0xccccccccu);
    wr32(sp0 - 0x10u, 0xccccccccu);
    wr32(sp0 - 0xcu, 0xccccccccu);
    wr32(sp0 - 8u, 0xccccccccu);
    edx = in_edx;
L_1026d04f: ;
    wr32(sp0 - 0x1cu, sp0 - 0x14u);
    wr32(sp0 - 0x20u, arg1 + 0xc044u);
    g->eax = sp0 - 0x14u;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1026d0eau), arg1 + 0xc044u, 3, arg1 + 0xc044u, sp0 - 0x14u, 0xccccccccu);
    t2 = g->ecx;
    wr32(sp0 - 0x18u, t1);
    if ((int32_t)t1 >= 0)
    {
        ecx = t2;
        loc_18 = t1;
        goto L_1026d070;
    }
    eax = t1;
    loc_18 = t1;
L_1026d087: ;
    wr32(sp0 - 0x1cu, sp0 - 0x14u);
    wr32(sp0 - 0x20u, arg1 + 0x2cu);
    g->eax = eax;
    g->edx = arg1 + 0x2cu;
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x1026d0eau), sp0 - 0x14u, 3, arg1 + 0x2cu, sp0 - 0x14u, loc_18);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x18u, t3);
    if ((int32_t)t3 >= 0)
    {
        edx = t5;
        loc_18 = t3;
        goto L_1026d0a5;
    }
    ecx = t4;
    wr32(arg1 + 0x24u, 0u);
    wr32(arg1 + 0x28u, 0u);
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    g->ebp = rd32(sp0 - 4u);
    return;
L_1026d070: ;
    wr32(sp0 - 0x1cu, sp0 - 0x14u);
    wr32(sp0 - 0x20u, arg1 + 0x803cu);
    g->edx = sp0 - 0x14u;
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), ecx, 3, arg1 + 0x803cu, sp0 - 0x14u, loc_18);
    t7 = g->edx;
    edx = t7;
    goto L_1026d04f;
L_1026d0a5: ;
    wr32(sp0 - 0x1cu, sp0 - 0x14u);
    wr32(sp0 - 0x20u, arg1 + 0x4034u);
    g->eax = sp0 - 0x14u;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), arg1 + 0x4034u, 3, arg1 + 0x4034u, sp0 - 0x14u, loc_18);
    eax = t6;
    goto L_1026d087;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d035(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026d035(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
