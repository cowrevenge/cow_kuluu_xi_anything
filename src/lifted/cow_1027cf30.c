/* f_0x1027cf30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1027cf30(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 228u);

    wr32(sp0 - 0xc4u, in_ebx);
    wr32(sp0 - 0xc8u, in_esi);
    wr32(sp0 - 0xccu, in_edi);
    wr32(sp0 - 0xd0u, arg2);
    wr32(sp0 - 0xd4u, arg1);
    g->esp = sp0 - 0xc4u;
    t1 = cow_cdecl(g, COW_IMG(0x1027c920u), 4, arg1, arg2, in_edi, in_esi);
    wr32(sp0 - 0xd8u, sp0 - 0xc0u);
    g->eax = sp0 - 0xc0u;
    t2 = rd32(arg1 + 0x24u);
    g->esp = sp0 - 0xd4u;
    t3 = cow_cdecl(g, COW_IMG(0x1027eb10u), 1, sp0 - 0xc0u);
    eax = t3;
    ebx = t1 * 0x9cu + t2;
    esi = arg2;
L_1027cf69: ;
    wr32(sp0 - 0xd0u, sp0 - 0xc0u);
    wr32(sp0 - 0xd4u, ebx + 0x1cu);
    wr32(sp0 - 0xd8u, sp0 - 0x80u);
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0xccu;
    cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x80u, ebx + 0x1cu, sp0 - 0xc0u);
    t4 = g->edx;
    wr32(sp0 - 0xdcu, sp0 - 0x80u);
    wr32(sp0 - 0xe0u, sp0 - 0xc0u);
    g->cf = g->cf;
    g->pf = g->pf;
    g->af = g->af;
    g->zf = g->zf;
    g->sf = g->sf;
    g->of = g->of;
    g->eax = sp0 - 0x80u;
    g->ecx = sp0 - 0xc0u;
    g->edx = t4;
    t5 = cow_cdecl(g, COW_IMG(0x1027eb30u), 5, sp0 - 0xc0u, sp0 - 0x80u, sp0 - 0x80u, rd32(sp0 - 0xd4u), sp0 - 0xc0u);
    t6 = g->ecx;
    t7 = g->edx;
    if (rd32(esi + 0x68u) == 0u)
    {
        eax = t5;
        goto L_1027cfaf;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    esi = rd32(esi + 0x68u);
    wr32(sp0 - 0xd0u, esi);
    wr32(sp0 - 0xd4u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0xc4u;
    t8 = cow_cdecl(g, COW_IMG(0x1027c920u), 4, arg1, esi, rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u));
    eax = rd32(arg1 + 0x24u);
    ebx = t8 * 0x9cu + rd32(arg1 + 0x24u);
    goto L_1027cf69;
L_1027cfaf: ;
    wr32(sp0 - 0xd0u, sp0 - 0xc0u);
    wr32(sp0 - 0xd4u, sp0 - 0x40u);
    g->esp = sp0 - 0xccu;
    cow_cdecl(g, COW_IMG(0x1027f100u), 2, sp0 - 0x40u, sp0 - 0xc0u);
    wr32(sp0 - 0xd8u, arg3);
    wr32(sp0 - 0xdcu, sp0 - 0x40u);
    wr32(sp0 - 0xe0u, arg4);
    g->esp = sp0 - 0xd4u;
    cow_cdecl(g, COW_IMG(0x1027ef40u), 3, arg4, sp0 - 0x40u, arg3);
    g->ebx = rd32(sp0 - 0xc4u);
    g->esi = rd32(sp0 - 0xc8u);
    g->edi = rd32(sp0 - 0xccu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027cf30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027cf30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
