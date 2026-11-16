/* f_0x102c4359 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102c4359(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_268;
    uint32_t loc_26c;
    uint32_t loc_270;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 636u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x268u, in_esi);
    wr32(sp0 - 0x26cu, in_edi);
    if (arg1 != 2u) goto L_102c4371;
    esi = 0x120u;
L_102c437c: ;
    wr32(sp0 - 0x270u, esi);
    if (arg2 == 0u)
    {
        loc_270 = esi;
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x264u;
        t3 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, loc_270, in_edi, in_esi);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    else
    {
        loc_270 = esi;
        wr32(sp0 - 0x20u, arg3);
        wr32(sp0 - 0x274u, sp0 - 0x264u);
        g->eax = sp0 - 0x264u;
        g->edx = in_edx;
        g->esp = sp0 - 0x270u;
        t1 = cow_thiscall_cdecl(g, arg2, self, 1, sp0 - 0x264u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (eax == 0u)
    {
        edi = eax;
    }
    else
    {
        ecx = rd32(sp0 - 0x270u);
        edi = eax;
        wr32(sp0 - 0x270u, esi);
        wr32(sp0 - 0x274u, 0u);
        wr32(sp0 - 0x278u, edi);
        g->esp = sp0 - 0x26cu;
        cow_cdecl(g, COW_IMG(0x10316dd0u), 3, edi, 0u, esi);
    }
    eax = edi;
L_102c43b4: ;
    g->esi = loc_268;
    g->edi = loc_26c;
    g->ebp = loc_4;
    return eax;
L_102c4371: ;
    if (arg1 != 1u) goto L_102c43b2;
    esi = 0x260u;
    goto L_102c437c;
L_102c43b2: ;
    eax = 0u;
    loc_4 = in_ebp;
    loc_268 = in_esi;
    loc_26c = in_edi;
    goto L_102c43b4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c4359(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c4359(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
