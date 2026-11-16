/* f_0x103145e4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_103145e4(Guest* g)
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
    uint32_t t13;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(COW_IMG(0x109b27b8u)) != 0u) goto L_10314602;
    if ((int32_t)rd32(sp0 + 4u) < 65)
    {
        eax = rd32(sp0 + 4u);
        edx = in_edx;
        goto L_10314651;
    }
    eax = rd32(sp0 + 4u);
    if ((int32_t)eax > 90)
    {
        edx = in_edx;
        goto L_10314651;
    }
    return eax + 0x20u;
L_10314602: ;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329198u)), 1, COW_IMG(0x109f8410u));   /* kernel32.dll!InterlockedIncrement */
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(COW_IMG(0x109f840cu)) == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = 0u;
        edi = rd32(COW_IMG(0x10329194u));
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        edi = rd32(COW_IMG(0x10329194u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_thiscall(g, edi, ecx, 1, COW_IMG(0x109f8410u));
        t5 = g->ecx;
        t6 = g->edx;
        g->esp = sp0 - 4u;
        t7 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, t5, t6, 1, 3, 0x13u, in_edi, in_esi);
        t8 = g->edx;
        eax = t7;
        ecx = 0x13u;
        edx = t8;
        ebx = 1u;
    }
    t9 = rd32(sp0 + 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x10314653u), ecx, 1, t9);
    t11 = g->edx;
    wr32(sp0 + 4u, t10);
    if (ebx == 0u)
    {
        eax = t10;
        ecx = t9;
        edx = t11;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, edi, ecx, 1, COW_IMG(0x109f8410u));
        t13 = g->edx;
        edx = t13;
    }
    else
    {
        eax = t10;
        ecx = t9;
        edx = t11;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, in_edi, in_esi);
        t12 = g->edx;
        edx = t12;
    }
    eax = rd32(sp0 + 4u);
L_10314651: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103145e4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103145e4(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
