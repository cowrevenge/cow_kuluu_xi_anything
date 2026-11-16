/* f_0x102abcf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_102abcf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x18u, in_ebx);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t2 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x10u, t2);
    wr32(sp0 + 0xcu, 0u);
    eax = 0u;
L_102abd11: ;
    t3 = arg6 + rd32(eax * 4u + sp0 - 0x14u) * 0xcu;
    t4 = rd32(eax * 4u + sp0 - 0x14u);
    wr32(sp0 + 0x10u, t3);
    t5 = rd32(arg7 + rd32(arg5 + t4 * 4u) * 4u);
    wr32(sp0 - 0xcu, t5);
    t6 = rd32(arg7 + rd32(arg5 + t4 * 4u) * 4u + 4u);
    wr32(sp0 - 8u, t6);
    t7 = rd32(arg7 + rd32(arg5 + t4 * 4u) * 4u + 8u);
    wr32(sp0 - 4u, t7);
    esi = 0u;
L_102abd43: ;
    t8 = cow_divs(g, esi + 1u, 3u);
    t9 = cow_mods(g, esi + 1u, 3u);
    if ((int32_t)rd32(esi * 4u + sp0 - 0xcu) >= (int32_t)rd32(sp0 + t9 * 4u - 0xcu))
    {
        ecx = rd32(esi * 4u + sp0 - 0xcu);
        edx = rd32(sp0 + t9 * 4u - 0xcu);
        edi = esi + 1u;
        eax = edx;
    }
    else
    {
        ecx = rd32(esi * 4u + sp0 - 0xcu);
        edx = rd32(sp0 + t9 * 4u - 0xcu);
        edi = esi + 1u;
        eax = ecx;
        ecx = edx;
    }
    if (eax != arg1) goto L_102abd70;
    if (ecx == arg2) goto L_102abd7d;
L_102abd70: ;
    if ((int32_t)edi < 3)
    {
        esi = edi;
        goto L_102abd43;
    }
    eax = rd32(sp0 + 0xcu);
L_102abd9c: ;
    wr32(sp0 + 0xcu, eax + 1u);
    if ((int32_t)(eax + 1u) < 2)
    {
        eax = eax + 1u;
        goto L_102abd11;
    }
    return;
L_102abd7d: ;
    if ((int32_t)(rd32(sp0 + 0xcu) + 1u & 0x80000001u) >= 0)
    {
        eax = rd32(sp0 + 0xcu);
        ecx = rd32(sp0 + 0xcu) + 1u & 0x80000001u;
    }
    else
    {
        eax = rd32(sp0 + 0xcu);
        ecx = rd32(sp0 + 0xcu) + 1u & 0x80000001u;
        ecx = (ecx - 1u | 0xfffffffeu) + 1u;
    }
    t10 = rd32(ecx * 4u + sp0 - 0x14u);
    wr32(esi * 4u + rd32(sp0 + 0x10u), t10);
    goto L_102abd9c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102abcf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102abcf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
