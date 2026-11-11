/* f_0x10062f50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts this-pointer by -0x34 then performs a destructor/cleanup routine on the object, calling helper functions based on flag bits in the argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10062f50(Guest* g, uint32_t self, uint32_t arg)
{
    uint32_t esi = self - 0x34u;
    uint8_t bl = (uint8_t)arg;

    if (bl & 2) {
        uint32_t eax = rd32(esi - 4u);
        uint32_t ebp = esi - 4u;
        uint32_t ecx = eax;
        ecx = (ecx << 5) + eax;       /* shl ecx,5; add ecx,eax */
        eax = eax - 1u;                /* dec eax */
        esi = esi + ecx * 4u;          /* lea esi,[esi+ecx*4] */

        if ((int32_t)eax >= 0) {       /* js -> skip loop if eax < 0 */
            uint32_t edi = eax + 1u;   /* lea edi,[eax+1] */
            do {
                esi = esi - 0x84u;     /* sub esi,0x84 */
                g->ecx = esi;          /* mov ecx,esi before call */
                cow_fastcall(g, COW_IMG(0x100611e0u), esi, 0, 0);
                edi = edi - 1u;        /* dec edi */
            } while (edi != 0);        /* jne */
        }

        if (bl & 1) {
            cow_stdcall(g, COW_IMG(0x1002c8e0u), 1, ebp);
        }

        g->edx = g->edx; /* edx untouched by this path beyond what calls leave */
        return ebp;      /* mov eax,ebp */
    } else {
        g->ecx = esi;    /* mov ecx,esi before call */
        cow_fastcall(g, COW_IMG(0x100611e0u), esi, 0, 0);

        if (bl & 1) {
            cow_stdcall(g, COW_IMG(0x10028710u), 1, esi);
        }

        return esi;      /* mov eax,esi */
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10062f50(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
