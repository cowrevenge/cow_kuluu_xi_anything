/* f_0x101bcbe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101bcbe0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    t1 = rd32(self + 0xcu);
    wr32(self, COW_IMG(0x10337c3cu));
    if (t1 != 0xffffffffu)
    {
        eax = t1;
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        t2 = rd32(COW_IMG(0x103291c8u));
        g->esp = sp0 - 8u;
        t3 = cow_stdcall(g, t2, 2, eax, 0u);   /* kernel32.dll!WaitForSingleObject */
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 != 0x102u)
        {
            eax = t3;
            edx = t5;
        }
        else
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            edi = t2;
            ebx = rd32(COW_IMG(0x103290f8u));
L_101bcc0b: ;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, ebx, ecx, 1, 1u);
            t6 = g->ecx;
            t7 = g->edx;
            t8 = rd32(self + 0xcu);
            g->eax = t8;
            g->edx = t7;
            t9 = cow_thiscall(g, edi, t6, 2, t8, 0u);
            t10 = g->ecx;
            t11 = g->edx;
            if (t9 == 0x102u)
            {
                eax = t9;
                ecx = t10;
                edx = t11;
                goto L_101bcc0b;
            }
            eax = t9;
            edx = t11;
        }
        t12 = rd32(self + 0xcu);
        g->esp = sp0 - 8u;
        cow_stdcall(g, rd32(COW_IMG(0x10329104u)), 1, t12);   /* kernel32.dll!CloseHandle */
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bcbe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101bcbe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
