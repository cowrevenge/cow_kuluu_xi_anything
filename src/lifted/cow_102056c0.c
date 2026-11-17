/* f_0x102056c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102056c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x14u) == 0xffffffffu)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->eax = in_eax;
        g->edx = in_edx;
        t1 = rd32(COW_IMG(0x1057876cu));
        t2 = rd32(self + 0x18u);
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x101598b0u), t1, 0);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            edi = t2;
            goto L_10205718;
        }
        eax = t3;
        edi = t2;
        t6 = rd32(eax + 0x124u);
        if (t6 >> 0x14u & 1u)
        {
            edx = t6 >> 0x14u;
            goto L_102056f8;
        }
        ecx = t6;
        edx = t6 >> 0x14u;
        if (!(ecx >> 0x15u & 1u))
        {
            ecx = ecx >> 0x15u;
            goto L_10205718;
        }
L_102056f8: ;
        if (rd32(COW_IMG(0x104dfd98u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x104dfd98u));
            goto L_10205718;
        }
        ecx = rd32(COW_IMG(0x104dfd98u));
        if (rd32(ecx + 0x3c390u) == rd32(eax + 0x78u))
        {
            ecx = rd32(ecx + 0x3c390u);
            edx = rd32(eax + 0x78u);
            goto L_10205718;
        }
        ecx = rd32(ecx + 0x3c390u);
        edx = rd32(eax + 0x78u);
        wr32(self + 0x18u, 1u);
L_1020571f: ;
        if (edi != rd32(self + 0x18u))
        {
            eax = rd32(self + 0x18u);
            if (eax != 0u)
            {
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0xfu);
                t11 = g->edx;
                t12 = (t10 & 0xffff0000u) | rd16(self + 0x14u);
                eax = t12;
                edx = t11;
                loc_8 = t10;
                loc_c = t12;
            }
            else
            {
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x10u);
                t8 = g->edx;
                t9 = (t8 & 0xffff0000u) | rd16(self + 0x14u);
                eax = t7;
                edx = t9;
                loc_8 = t7;
                loc_c = t9;
            }
            g->edx = edx;
            t13 = rd32(self + 8u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x1011adb0u), t13, 2, loc_c, loc_8);
            t14 = g->ecx;
            t15 = g->edx;
            ecx = t14;
            edx = t15;
        }
    }
    if (rd32(self + 0x1cu) != 0u)
    {
        eax = rd32(self + 0x1cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t16 = cow_stdcall(g, COW_IMG(0x10201690u), 0);
        t17 = g->edx;
        if (t16 != rd32(self + 0x1cu))
        {
            eax = t16;
            edx = t17;
            t18 = rd32(self + 8u);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t18, 1u);
        }
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(self) + 0x4cu), self, 1, arg1);
    return;
L_10205718: ;
    wr32(self + 0x18u, 0u);
    goto L_1020571f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102056c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102056c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
