/* f_0x102a5e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102a5e20(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->eax = arg2;
    g->ecx = self;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x109a2864u));
    t2 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg2, in_ebp, in_ebx);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bde58u), t1);
    t5 = g->edx;
    if ((int32_t)arg1 < 1)
    {
        eax = arg1;
        edx = t5;
    }
    else
    {
        edx = t5;
        ebx = t1;
        if (ebx == 0u)
        {
            eax = arg1;
        }
        else
        {
            ebp = 0u;
L_102a5e51: ;
            if ((int32_t)rd32(ebx) <= 0)
            {
                eax = rd32(ebx);
            }
            else
            {
                eax = rd32(ebx);
                esi = 0u;
                edi = ebx + 4u;
L_102a5e5c: ;
                g->eax = eax;
                g->ecx = arg2;
                g->esp = sp0 - 8u;
                t6 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg2, in_edi, in_esi);
                t7 = g->ecx;
                g->edx = rd32(edi);
                t8 = rd32(edi);
                g->esp = sp0 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bde44u), ebp);
                t9 = g->edx;
                if ((int32_t)(esi + 1u) < (int32_t)rd32(ebx))
                {
                    eax = rd32(ebx);
                    edx = t9;
                    ebp = ebp + 1u;
                    esi = esi + 1u;
                    edi = edi + 4u;
                    goto L_102a5e5c;
                }
                eax = rd32(ebx);
                edx = t9;
                ebp = ebp + 1u;
            }
            if (rd32(ebx + 0x104u) != 0u)
            {
                ebx = rd32(ebx + 0x104u);
                goto L_102a5e51;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a5e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a5e20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
