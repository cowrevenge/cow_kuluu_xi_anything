/* f_0x102d4797 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_102d4797(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_58;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 136u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x58u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x102e1005u), sp0 - 8u, 0);
    t1 = g->edx;
    if (arg1 != 0u)
    {
        edx = t1;
        goto L_102d47b4;
    }
    edx = t1;
L_102d47ad: ;
    esi = 0x8876086cu;
    loc_4 = in_ebp;
    loc_58 = in_esi;
L_102d480e: ;
    g->esp = sp0 - 0x58u;
    cow_fastcall(g, COW_IMG(0x102e1439u), sp0 - 8u, edx, 0);
    g->esi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 4u);
    return esi;
L_102d47b4: ;
    if (arg4 == 0u) goto L_102d47ad;
    if (arg1 != arg4)
    {
        eax = 1u;
    }
    else
    {
        eax = 0x10001u;
    }
    wr32(sp0 - 0x5cu, eax);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, arg6);
    wr32(sp0 - 0x68u, arg5);
    wr32(sp0 - 0x6cu, arg4);
    wr32(sp0 - 0x70u, sp0 - 0x54u);
    g->esp = sp0 - 0x58u;
    t2 = cow_fastcall(g, COW_IMG(0x102e143eu), sp0 - 8u, edx, 6, sp0 - 0x54u, arg4, arg5, arg6, 0u, eax);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        edx = t4;
        goto L_102d480c;
    }
    ecx = t3;
    edx = t4;
    wr32(sp0 - 0x5cu, arg8);
    wr32(sp0 - 0x60u, arg7);
    wr32(sp0 - 0x64u, sp0 - 0x2cu);
    wr32(sp0 - 0x68u, arg5);
    t5 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x6cu, t5);
    t6 = rd32(sp0 - 0x4cu);
    wr32(sp0 - 0x70u, t6);
    t7 = rd32(sp0 - 0x50u);
    wr32(sp0 - 0x74u, t7);
    t8 = rd32(sp0 - 0x54u);
    wr32(sp0 - 0x78u, t8);
    wr32(sp0 - 0x7cu, arg3);
    wr32(sp0 - 0x80u, arg2);
    wr32(sp0 - 0x84u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t9 = cow_stdcall(g, COW_IMG(0x102d2a73u), 11, arg1, arg2, arg3, t8, t7, t6, t5, arg5, sp0 - 0x2cu, arg7, arg8);
    t10 = g->edx;
    if ((int32_t)t9 >= 0)
    {
        edx = t10;
        esi = 0u;
        goto L_102d480e;
    }
    eax = t9;
    edx = t10;
L_102d480c: ;
    esi = eax;
    goto L_102d480e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d4797(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d4797(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
