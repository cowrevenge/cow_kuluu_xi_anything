/* f_0x1018e0e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1018e0e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    cow_frame(g, sp0, 284u);

    wr32(sp0 - 0x104u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    cow_thiscall(g, COW_IMG(0x1018e660u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0xd0u) == 0u)
    {
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        wr32(sp0 - 0x108u, in_ebx);
        wr32(sp0 - 0x10cu, in_esi);
        ebx = 0u;
L_1018e0fc: ;
        esi = 0u;
L_1018e0fe: ;
        if ((int32_t)esi >= 20) goto L_1018e14b;
        t3 = cow_divs(g, esi, 0x14u);
        t4 = cow_mods(g, esi, 0x14u);
        wr32(sp0 - 0x110u, t4);
        t5 = rd32(self + 0xdcu);
        wr32(sp0 - 0x114u, t5);
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        g->eax = sp0 - 0x100u;
        g->edx = t5;
        g->esp = sp0 - 0x10cu;
        t6 = cow_cdecl(g, COW_IMG(0x1018e170u), 3, sp0 - 0x100u, t5, t4);
        t7 = g->edx;
        wr32(sp0 - 0x110u, sp0 - 0x100u);
        g->edx = t7;
        t8 = rd32(COW_IMG(0x10662dccu));
        t9 = cow_thiscall(g, COW_IMG(0x101c4a90u), t8, 1, sp0 - 0x100u);
        t10 = g->ecx;
        t11 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            ecx = t10;
            edx = t11;
            goto L_1018e13e;
        }
        eax = t9;
        ecx = t10;
        if ((int32_t)ebx < 20)
        {
            edx = ebx;
            ebx = ebx + 1u;
            goto L_1018e141;
        }
        edx = ebx;
        ebx = ebx + 1u;
L_1018e13e: ;
        esi = esi + 1u;
        goto L_1018e0fe;
    }
L_1018e166: ;
    g->edx = edx;
    return;
L_1018e141: ;
    wr32(sp0 - 0x110u, 0x64u);
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    cow_thiscall(g, rd32(COW_IMG(0x103290f8u)), ecx, 1, 0x64u);
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
    goto L_1018e0fc;
L_1018e14b: ;
    t14 = rd32(self + 0xd0u);
    wr32(sp0 - 0x110u, t14);
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t14);
    t15 = g->edx;
    wr32(self + 0xd0u, 0u);
    edx = t15;
    goto L_1018e166;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018e0e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018e0e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
