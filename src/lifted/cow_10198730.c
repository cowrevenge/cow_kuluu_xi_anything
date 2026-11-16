/* f_0x10198730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10198730(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_c;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0xcu, 0u);
    t1 = rd32(rd32(self + 0x18u));
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0x20u, 0xbu);
    g->eax = rd32(self + 0x18u);
    g->edx = in_edx;
    t2 = rd32(self + 0x18u);
    g->esp = sp0 - 0x18u;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t1);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
        ebx = in_ebx;
        ebp = in_ebp;
    }
    else
    {
        edx = t4;
        wr32(sp0 - 0x1cu, in_ebx);
        wr32(sp0 - 0x20u, in_ebp);
        wr32(sp0 - 0x10u, 1u);
        ebx = in_ebx;
        ebp = 0u;
        esi = 0u;
        loc_c = 0u;
L_10198775: ;
        if ((int32_t)rd32(self + 0x28u) > (int32_t)esi)
        {
            loc_10 = 1u;
        }
        else
        {
            eax = rd32(self + 0x28u);
            if ((int32_t)esi >= (int32_t)(eax + 0xbu))
            {
                loc_10 = 1u;
            }
            else
            {
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, 1u);
                wr32(sp0 - 0x2cu, 1u);
                wr32(sp0 - 0x30u, sp0 - 8u);
                g->ebx = ebx;
                g->edi = self;
                g->eax = sp0 - 8u;
                g->esp = sp0 - 0x20u;
                t5 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, 1u, 1u, 1u);
                wr32(sp0 - 0x24u, 0x80808080u);
                t6 = rd32(ebp + rd32(self + 0x18u));
                wr32(sp0 - 0x28u, t6);
                wr32(sp0 - 0x2cu, 0xbu);
                g->ecx = rd32(self + 0x18u);
                g->edx = t6;
                t7 = rd32(self + 0x18u);
                g->esp = sp0 - 0x24u;
                t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t6);
                t9 = g->ecx;
                t10 = g->edx;
                wr32(sp0 - 0x28u, t8);
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, 0x1eu);
                g->edx = t10;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x101907e0u), 9, 0x1eu, 0u, t8, 0x80808080u, in_ebp, in_ebx, in_edi, in_esi, 1u);
                t11 = g->edx;
                wr32(sp0 - 0x10u, 2u);
                edx = t11;
                ebx = 0u;
                esi = rd32(sp0 - 0xcu);
                loc_10 = 2u;
            }
        }
        wr32(sp0 - 0xcu, esi + 1u);
        t12 = rd32(ebp + rd32(self + 0x18u) + 0x10u);
        wr32(sp0 - 0x24u, t12);
        wr32(sp0 - 0x28u, 0xbu);
        g->eax = rd32(self + 0x18u);
        g->edx = edx;
        t13 = rd32(self + 0x18u);
        g->esp = sp0 - 0x20u;
        t14 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t12);
        t15 = g->edx;
        if (t14 != 0u)
        {
            edx = t15;
            ebp = ebp + 0x10u;
            esi = esi + 1u;
            goto L_10198775;
        }
        eax = t14;
        edx = t15;
        ebx = rd32(sp0 - 0x1cu);
        ebp = rd32(sp0 - 0x20u);
    }
    g->ebx = ebx;
    g->edi = in_edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10198730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10198730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
