/* f_0x10138800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10138800(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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

    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xb4u);
    t2 = g->edx;
    g->ecx = self;
    t3 = rd32(sp0 - 8u);
    t4 = cow_call_regs(g, COW_IMG(0x10138700u), t1, g->ecx, t2, 0, 1, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd8(t4 + 1u) == 0xbu)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        ebx = 0u;
    }
    else
    {
        edx = t6;
        loc_8 = (t3 & 0xffffffu) | (t1 != 0u) << 0x18u;
        eax = self + 0x68u;
        ebx = 0u;
        edi = 0u;
        loc_4 = self + 0x68u;
L_10138836: ;
        if (loc_8 >> 0x18u != 0u)
        {
            eax = (eax & 0xffffff00u) | loc_8 >> 0x18u;
            goto L_1013884c;
        }
        eax = (eax & 0xffffff00u) | loc_8 >> 0x18u;
        g->esp = sp0 - 0x18u;
        t7 = cow_call_regs(g, COW_IMG(0x10138700u), eax, g->ecx, edx, 0, 1, edi);
        t8 = g->edx;
        if (rd8(t7 + 1u) == 1u)
        {
            eax = t7;
            edx = t8;
            goto L_10138869;
        }
        eax = t7;
        edx = t8;
L_1013884c: ;
        g->ecx = self;
        g->esp = sp0 - 0x18u;
        t9 = cow_call_regs(g, COW_IMG(0x10138700u), eax, g->ecx, edx, 0, 1, edi);
        t10 = g->ecx;
        t11 = g->edx;
        wr16(loc_4, rd16(t9));
        eax = t9;
        edx = t11;
        ebx = ebx + 1u;
        loc_4 = loc_4 + 2u;
L_10138869: ;
        g->ecx = self;
        g->esp = sp0 - 0x18u;
        t12 = cow_call_regs(g, COW_IMG(0x10138700u), eax, g->ecx, edx, 0, 1, edi + 1u);
        t13 = g->ecx;
        t14 = g->edx;
        if (rd8(t12 + 1u) != 0xbu)
        {
            eax = t12;
            edx = t14;
            edi = edi + 1u;
            goto L_10138836;
        }
        eax = t12;
        ecx = t13;
        edx = t14;
    }
    wr8(ebx * 2u + self + 0x68u, 0xbu);
    wr8(ebx * 2u + self + 0x69u, 0xbu);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t15 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0xfu);
    edx = self + 0x80u;
    ebp = t15;
    edi = COW_IMG(0x10333b4cu);
L_10138899: ;
    ecx = 0u;
L_1013889b: ;
    t16 = rd32(rd32(ebp) + rd8(ecx + edi) * 4u);
    wr32(edx, t16);
    if ((int32_t)(ecx + 1u) < 2)
    {
        ecx = ecx + 1u;
        edx = edx + 4u;
        goto L_1013889b;
    }
    eax = t16;
    edx = edx + 4u;
    if ((int32_t)(edi + 2u) < (int32_t)COW_IMG(0x10333b62u))
    {
        edi = edi + 2u;
        goto L_10138899;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10138800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10138800(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
