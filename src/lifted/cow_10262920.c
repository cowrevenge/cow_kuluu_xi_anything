/* f_0x10262920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10262920(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 8u, 0u);
    if (rd32(sp0 + 8u) == 0u)
    {
        ebp = rd32(sp0 + 8u);
        goto L_1026295b;
    }
    ebp = rd32(sp0 + 8u);
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x1026a530u), ebp, 0);
    t2 = g->edx;
    if (t1 != 0u) goto L_1026295b;
    edx = t2;
    wr32(sp0 - 0x1cu, ebp);
    wr32(sp0 - 0x20u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x18u;
    t3 = cow_fastcall(g, COW_IMG(0x10262790u), self, edx, 2, arg1, ebp);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return t3;
L_1026295b: ;
    wr32(sp0 - 4u, 0x80040207u);
    wr32(sp0 + 8u, 0u);
    eax = 0u;
    loc_c = in_ebx;
    loc_10 = in_ebp;
    loc_14 = in_esi;
    loc_18 = in_edi;
    loc_8 = 0u;
    loc_4 = 0x80040207u;
L_1026296d: ;
    if (eax != rd8(self + 0x26u))
    {
        wr32(sp0 - 0x1cu, sp0 - 8u);
        wr32(sp0 - 0x20u, self + 0xcu);
        g->eax = self + 0xcu;
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x18u;
        t7 = cow_thiscall(g, rd32(rd32(self + 0xcu) + 0x30u), rd32(self + 0xcu), 2, self + 0xcu, sp0 - 8u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    else
    {
        ecx = rd8(self + 0x26u);
        wr32(sp0 - 0x1cu, sp0 - 8u);
        wr32(sp0 - 0x20u, arg1);
        g->eax = sp0 - 8u;
        g->edx = rd32(arg1);
        t4 = rd32(arg1);
        g->esp = sp0 - 0x18u;
        t5 = cow_thiscall(g, rd32(t4 + 0x30u), ecx, 2, arg1, sp0 - 8u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    if ((int32_t)eax < 0)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_102629d0;
    }
    t9 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t9);
    wr32(sp0 - 0x20u, ebp);
    wr32(sp0 - 0x24u, arg1);
    g->eax = t9;
    g->esp = sp0 - 0x18u;
    t10 = cow_fastcall(g, COW_IMG(0x10262840u), self, edx, 3, arg1, ebp, t9);
    t11 = g->edx;
    t12 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t12);
    cow_thiscall(g, rd32(rd32(t12) + 8u), rd32(t12), 1, t12);
    if ((int32_t)t10 >= 0) goto L_102629ec;
    esi = t10;
    if (esi == 0x80004005u)
    {
        loc_4 = rd32(sp0 - 4u);
    }
    else
    {
        if (esi == 0x80070057u)
        {
            loc_4 = rd32(sp0 - 4u);
        }
        else
        {
            if (esi == 0x8004022au)
            {
                loc_4 = rd32(sp0 - 4u);
            }
            else
            {
                wr32(sp0 - 4u, esi);
                loc_4 = esi;
            }
        }
    }
L_102629d0: ;
    t13 = rd32(sp0 + 8u) + 1u;
    t14 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t13);
    if ((int32_t)(t14 + 1u) < 2)
    {
        eax = t13;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        goto L_1026296d;
    }
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return loc_4;
L_102629ec: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262920(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
