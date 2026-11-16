/* f_0x102e75bc - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e75bc(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 172u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xa0u, in_ebx);
    wr32(sp0 - 0xa4u, in_edi);
    wr32(sp0 - 0xa8u, 0x25u);
    edi = sp0 - 0x9cu;
    eax = 0u;
    ecx = 0x25u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0xa8u, sp0 - 0x9cu);
    wr32(sp0 - 0x9cu, 0x94u);
    g->eax = sp0 - 0x9cu;
    g->edx = in_edx;
    t1 = rd32(sp0 - 8u);
    g->esp = sp0 - 0xa4u;
    t2 = cow_thiscall(g, rd32(COW_IMG(0x103291a8u)), ecx, 1, sp0 - 0x9cu);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        ebx = (in_ebx & 0xffffff00u) | 1u;
        loc_8 = (rd32(sp0 - 8u) & 0xffffffu) | 0x1000000u;
    }
    if (rd32(sp0 - 0x8cu) != 1u) goto L_102e7615;
    if (rd32(sp0 - 0x98u) <= 4u)
    {
        zf = rd32(sp0 - 0x98u) == 4u;
        if (!zf) goto L_102e760f;
        if (rd32(sp0 - 0x94u) < 0xau) goto L_102e760f;
        if (rd16(sp0 - 0x90u) >= 0x55du) goto L_102e761f;
L_102e760f: ;
        loc_8 = (loc_8 & 0xffffffu) | 0x1000000u;
    }
L_102e761f: ;
    if (arg1 == 6u) goto L_102e7640;
    if (arg1 == 7u) goto L_102e7639;
    if (arg1 - 7u != 3u) goto L_102e7635;
    if (loc_8 >> 0x18u == 0u)
    {
        eax = arg1 - 0xau;
        goto L_102e7661;
    }
L_102e7635: ;
    eax = 0u;
L_102e7669: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax;
L_102e7615: ;
    if (rd32(sp0 - 0x8cu) != 2u) goto L_102e7635;
    if ((uint8_t)ebx == 0u) goto L_102e7650;
    goto L_102e761f;
L_102e7639: ;
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0xa4u;
    t5 = cow_call_regs(g, COW_IMG(0x102e74dfu), arg1 - 7u, ecx, edx, 1, 0);
    eax = t5;
    goto L_102e7669;
L_102e7640: ;
    if (loc_8 >> 0x18u != 0u) goto L_102e7635;
    g->ebp = sp0 - 0x78u;
    g->eax = arg1 - 6u;
    g->esp = sp0 - 0xa4u;
    t6 = cow_stdcall(g, COW_IMG(0x102e7517u), 0);
    eax = t6 & 4u;
    goto L_102e7669;
L_102e7650: ;
    if (arg1 == 0xau) goto L_102e7661;
    wr32(sp0 - 0xa8u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0xa4u;
    t7 = cow_thiscall(g, rd32(COW_IMG(0x1032925cu)), ecx, 1, arg1);
    eax = t7;
    goto L_102e7669;
L_102e7661: ;
    g->ebp = sp0 - 0x78u;
    g->eax = eax;
    g->esp = sp0 - 0xa4u;
    t8 = cow_stdcall(g, COW_IMG(0x102e7517u), 0);
    eax = t8 & 8u;
    goto L_102e7669;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e75bc(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e75bc(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
