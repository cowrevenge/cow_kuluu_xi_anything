/* f_0x1017b110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1017b110(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t19;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 * 0x78u + self + 0x60u) != 0u)
    {
        if (rd32(arg1 * 0x78u + self + 0x88u) == 0u)
        {
            eax = rd32(arg1 * 0x78u + self + 0x88u);
            edx = in_edx;
        }
        else
        {
            eax = rd32(arg1 * 0x78u + self + 0x88u);
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t1 = cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
            t2 = g->edx;
            wr32(arg1 * 0x78u + self + 0x88u, 0u);
            eax = t1;
            edx = t2;
        }
        if (rd32(arg1 * 0x78u + self + 0x9cu) != 0u)
        {
            ecx = rd32(arg1 * 0x78u + self + 0x9cu);
            g->eax = eax;
            g->edx = rd32(ecx);
            t3 = rd32(ecx);
            g->esp = sp0 - 0xcu;
            t4 = cow_thiscall(g, rd32(t3 + 0x18u), ecx, 1, 3u);
            t5 = g->edx;
            wr32(arg1 * 0x78u + self + 0x9cu, 0u);
            eax = t4;
            edx = t5;
        }
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t6 = cow_fastcall(g, COW_IMG(0x10170cd0u), arg1 * 0x78u + self + 0xa4u, edx, 1, 0u);
        t7 = g->edx;
        t8 = arg1 * 0x78u + self + 0x60u;
        g->edx = t7;
        cow_stdcall(g, COW_IMG(0x10186dd0u), 1, t8);
        t9 = g->edx;
        t10 = rd32(t8 + 0x64u);
        g->ecx = self;
        g->edx = t9;
        cow_stdcall(g, COW_IMG(0x1017a690u), 1, t10);
        t11 = g->ecx;
        t12 = g->edx;
        if (rd32(t8 + 0x54u) == 0u)
        {
            eax = rd32(t8 + 0x54u);
            edx = t12;
            edi = t8;
        }
        else
        {
            eax = rd32(t8 + 0x54u);
            ecx = t11;
            edx = t12;
            edi = t8;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t13 = cow_cdecl(g, COW_IMG(0x100446a0u), 1, eax);
            t14 = g->edx;
            g->edx = t14;
            cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(edi + 0x54u), 0);
            t15 = g->edx;
            t16 = rd32(rd32(edi + 0x54u) + 0x14u);
            g->cf = g->cf;
            g->pf = g->pf;
            g->af = g->af;
            g->zf = g->zf;
            g->sf = g->sf;
            g->of = g->of;
            g->eax = t16;
            g->edx = t15;
            t17 = cow_stdcall(g, COW_IMG(0x10073b20u), 1, t16);
            t18 = g->edx;
            wr32(edi + 0x54u, 0u);
            eax = t17;
            edx = t18;
        }
        if (rd32(self + 0x39498u) != 0u)
        {
            if (rd32(edi + 0x58u) != 0u)
            {
                ecx = rd32(edi + 0x58u);
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, COW_IMG(0x10071ec0u), ecx, 0);
                t19 = rd32(rd32(edi + 0x58u) + 0x14u);
                g->cf = g->cf;
                g->pf = g->pf;
                g->af = g->af;
                g->zf = g->zf;
                g->sf = g->sf;
                g->of = g->of;
                cow_stdcall(g, COW_IMG(0x10073b20u), 1, t19);
                wr32(edi + 0x58u, 0u);
            }
        }
        eax = 0u;
        ecx = 0x1eu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017b110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1017b110(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
