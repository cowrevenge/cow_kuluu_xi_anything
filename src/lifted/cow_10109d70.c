/* f_0x10109d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10109d70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x101094d0u), in_eax, arg2, g->edx, 0, 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(arg1) == 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(arg1);
        edx = t3;
        esi = 0u;
        edi = arg1;
        goto L_10109e3e;
    }
    eax = (t1 & 0xffffff00u) | rd8(arg1);
    ecx = t2;
    edx = t3;
    esi = 0u;
    edi = arg1;
L_10109d95: ;
    if ((uint8_t)eax != 0x22u)
    {
        esi = esi + 1u;
        goto L_10109dba;
    }
    esi = esi + 1u;
    wr8(sp0 - 7u, (uint8_t)eax);
    wr32(sp0 - 0x1cu, esi - 1u);
    wr32(sp0 - 0x20u, edi);
    wr8(sp0 - 8u, 0x5cu);
    wr8(sp0 - 6u, 0u);
    g->eax = esi - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, COW_IMG(0x10109340u), arg2, 2, edi, esi - 1u);
    t5 = g->edx;
    wr32(sp0 - 0x1cu, sp0 - 8u);
    eax = t4;
    edx = t5;
L_10109e1a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t7 = cow_thiscall(g, COW_IMG(0x101093b0u), arg2, 1, sp0 - 8u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    edi = edi + (uint16_t)esi;
    esi = 0u;
L_10109e2b: ;
    if (rd8(edi + (uint16_t)esi) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + (uint16_t)esi);
        ecx = (uint16_t)esi;
        goto L_10109d95;
    }
    eax = (eax & 0xffffff00u) | rd8(edi + (uint16_t)esi);
L_10109e3e: ;
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, edi);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10109340u), arg2, 2, edi, esi);
    return;
L_10109dba: ;
    if ((uint8_t)eax != 0xau) goto L_10109dc9;
    wr8(sp0 - 7u, 0x6eu);
    wr8(sp0 - 6u, 0u);
L_10109e04: ;
    wr32(sp0 - 0x1cu, esi - 1u);
    wr32(sp0 - 0x20u, edi);
    wr8(sp0 - 8u, 0x5cu);
    g->edx = esi - 1u;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10109340u), arg2, 2, edi, esi - 1u);
    t6 = g->edx;
    wr32(sp0 - 0x1cu, sp0 - 8u);
    eax = sp0 - 8u;
    edx = t6;
    goto L_10109e1a;
L_10109dc9: ;
    if ((uint8_t)eax < 0x20u) goto L_10109de5;
    if ((uint8_t)eax == 0x7fu) goto L_10109de5;
    if ((int8_t)eax < 0)
    {
        if (rd8(edi + (uint16_t)esi) != 0u)
        {
            esi = esi + 1u;
        }
    }
    goto L_10109e2b;
L_10109de5: ;
    wr8(sp0 - 7u, (uint8_t)eax >> 6u);
    wr8(sp0 - 6u, eax >> 3u & 7u);
    wr8(sp0 - 5u, eax & 7u);
    wr8(sp0 - 4u, 0u);
    eax = (eax & 0xffffff00u) | (eax & 7u);
    goto L_10109e04;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10109d70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
