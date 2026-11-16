/* f_0x102f5da8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102f5da8(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(rd32(arg1 + 0x18cu) + 0x11u) == 0u)
    {
        edi = rd32(arg1 + 0x18cu);
        g->eax = rd32(arg1 + 0x190u);
        g->edx = in_edx;
        t1 = rd32(arg1 + 0x190u);
        g->esp = sp0 - 0x10u;
        t2 = cow_thiscall_cdecl(g, rd32(t1 + 4u), self, 1, arg1);
        t3 = g->edx;
        if (t2 == 1u)
        {
            eax = t2 - 1u;
            edx = t3;
            ebp = t2;
            goto L_102f5e0a;
        }
        eax = t2 - 1u;
        edx = t3;
        ebp = t2;
        if (eax != 1u) goto L_102f5e34;
        t4 = rd8(edi + 0x14u);
        wr8(edi + 0x11u, 1u);
        if ((uint8_t)t4 == 0u) goto L_102f5df9;
        if (rd8(rd32(arg1 + 0x190u) + 0x51u) == 0u) goto L_102f5e34;
        wr32(rd32(arg1) + 0x14u, 0x3au);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall_cdecl(g, rd32(rd32(arg1)), arg1, 1, arg1);
        t5 = g->edx;
        edx = t5;
L_102f5e33: ;
L_102f5e34: ;
        eax = ebp;
    }
    else
    {
        eax = 2u;
        edx = in_edx;
    }
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_102f5df9: ;
    if ((int32_t)rd32(arg1 + 0x84u) > (int32_t)rd32(arg1 + 0x7cu))
    {
        esi = rd32(arg1 + 0x7cu);
        wr32(arg1 + 0x84u, esi);
    }
    goto L_102f5e34;
L_102f5e0a: ;
    if (rd8(edi + 0x14u) == 0u) goto L_102f5e19;
    g->esi = arg1;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x102f59abu), arg1, edx, 0);
    t6 = g->edx;
    wr8(edi + 0x14u, 0u);
    edx = t6;
    goto L_102f5e34;
L_102f5e19: ;
    if (rd8(edi + 0x10u) == 0u)
    {
        wr32(rd32(arg1) + 0x14u, 0x22u);
        g->eax = rd32(arg1);
        g->edx = edx;
        t7 = rd32(arg1);
        g->esp = sp0 - 0x10u;
        t8 = cow_thiscall_cdecl(g, rd32(t7), arg1, 1, arg1);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall_cdecl(g, COW_IMG(0x102f5d6eu), arg1, 5, arg1, in_ebp, in_edi, in_esi, in_ebx);
    t10 = g->edx;
    edx = t10;
    goto L_102f5e33;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f5da8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f5da8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
