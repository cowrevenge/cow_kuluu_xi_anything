/* f_0x1010beb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1010beb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x10u;
    t2 = cow_fastcall(g, COW_IMG(0x1010c7c0u), t1, in_edx, 2, 0u, 8u);
    t3 = g->edx;
    if (t2 != 0u)
    {
        edx = t3;
        ebp = t2;
        edi = t1;
        if (rd32(edi + 8u) == 0u)
        {
            esi = 0u;
            loc_8 = 0u;
        }
        else
        {
            eax = rd32(edi + 8u);
            esi = ebp - eax;
            loc_8 = ebp - eax;
        }
        wr32(ebp, 0xff000101u);
        g->esp = sp0 - 0x14u;
        t4 = cow_fastcall(g, COW_IMG(0x1010c7c0u), edi, edx, 2, 0u, 0x18u);
        t5 = g->edx;
        wr32(sp0 + 0xcu, t4);
        if (t4 == 0u)
        {
            edx = t5;
        }
        else
        {
            edx = t5;
            g->esp = sp0 - 0x18u;
            t6 = cow_fastcall(g, COW_IMG(0x1010c7c0u), arg2, edx, 2, 0u, 8u);
            t7 = rd32(rd32(edi + 8u) + 4u) + 1u;
            wr32(rd32(edi + 8u) + 4u, t7);
            if (t6 != 0u)
            {
                eax = t6;
                if (rd32(rd32(arg2 + 8u) + 4u) == 0u)
                {
                    ecx = rd32(arg2 + 8u);
                    edx = rd32(rd32(arg2 + 8u) + 4u);
                    goto L_1010bf42;
                }
                ecx = rd32(arg2 + 8u);
                edx = rd32(rd32(arg2 + 8u) + 4u);
                if (rd32(ecx + 8u) <= rd32(arg1 + 4u)) goto L_1010bf48;
L_1010bf42: ;
                t8 = rd32(arg1 + 4u);
                wr32(ecx + 8u, t8);
L_1010bf48: ;
                if (edx == 0u) goto L_1010bf54;
                if (rd32(ecx + 0xcu) >= rd32(arg1 + 4u)) goto L_1010bf5a;
L_1010bf54: ;
                t9 = rd32(arg1 + 4u);
                wr32(ecx + 0xcu, t9);
L_1010bf5a: ;
                wr32(ecx + 4u, edx + 1u);
                t10 = rd32(arg1 + 4u);
                wr32(eax, t10);
                if (rd32(edi + 8u) == 0u)
                {
                    ebp = 0u;
                }
                else
                {
                    ecx = rd32(edi + 8u);
                    ebp = ebp - ecx;
                }
                wr32(eax + 4u, ebp);
            }
            g->esp = sp0 - 0x18u;
            t11 = cow_stdcall(g, COW_IMG(0x1010bda0u), 2, arg4, arg1 + 8u);
            wr32(rd32(sp0 + 0xcu) + 4u, t11);
            t12 = cow_stdcall(g, COW_IMG(0x1010bda0u), 2, arg4, arg1 + 0x18u);
            wr32(rd32(sp0 + 0xcu) + 8u, t12);
            g->edx = arg1 + 0x10u;
            t13 = cow_stdcall(g, COW_IMG(0x1010bda0u), 2, arg4, arg1 + 0x10u);
            t14 = g->edx;
            wr32(rd32(sp0 + 0xcu) + 0xcu, t13);
            g->edx = t14;
            t15 = cow_thiscall(g, COW_IMG(0x1010c000u), self, 3, arg1, edi, arg4);
            t16 = g->edx;
            cow_fastcall(g, COW_IMG(0x1010c190u), self, t16, 3, arg1, edi, arg4);
            t17 = g->edx;
            edx = t17;
            esi = loc_8;
        }
        g->esp = sp0 - 0x14u;
        t18 = cow_fastcall(g, COW_IMG(0x1010c7c0u), edi, edx, 2, 0u, 4u);
        if (t18 != 0u)
        {
            eax = t18;
            wr32(eax, 0xff00ff00u);
        }
        t19 = rd32(edi + 4u) - esi;
        wr32(esi + rd32(edi + 8u) + 4u, t19);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010beb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010beb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
